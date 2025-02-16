#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "Nano.h"
#include "Base.h"

SS::IDLevel whichLeptonLevel(int id, int idx);
bool isLeptonLevel(SS::IDLevel idlevel, int id, int idx);

struct Lepton {
    Lepton(int id = 0, unsigned int idx = 0) : id_(id), idx_(idx) {
        if (id != 0) {
            pt_ = (abs(id_) == 11 ? nt.Electron_pt()[idx_] : nt.Muon_pt()[idx_]);
            eta_ = (abs(id_) == 11 ? nt.Electron_eta()[idx_] : nt.Muon_eta()[idx_]);
            phi_ = (abs(id_) == 11 ? nt.Electron_phi()[idx_] : nt.Muon_phi()[idx_]);
            p4_ = (abs(id_) == 11 ? nt.Electron_p4()[idx_] : nt.Muon_p4()[idx_]);
            miniIso_ = (abs(id_) == 11 ? nt.Electron_miniPFRelIso_all()[idx_] : nt.Muon_miniPFRelIso_all()[idx_]);
            genPartFlav_ = (abs(id_) == 11 ? nt.Electron_genPartFlav()[idx_] : nt.Muon_genPartFlav()[idx_]);
            idlevel_ = whichLeptonLevel(id_, idx_);
            int mcidx = (abs(id_) == 11 ? nt.Electron_genPartIdx()[idx_] : nt.Muon_genPartIdx()[idx_]);
            mcid_ = nt.GenPart_pdgId()[mcidx];
        }
    }
    void set_idlevel(int idlevel) { idlevel_ = idlevel; }
    unsigned int idx() const { return idx_; }
    int id() const { return id_; }
    int absid() { return abs(id_); }
    int is_el() { return abs(id_) == 11; }
    int is_mu() { return abs(id_) == 13; }
    int charge() { return -1 * id_ / abs(id_); }
    int idlevel() { return idlevel_; }
    int mcid() { return mcid_; }
    LorentzVector p4() { return p4_; }
    float pt() { return pt_; }
    float eta() { return eta_; }
    float phi() { return phi_; }
    float miniIso() { return miniIso_;}
    int genPartFlav() {return genPartFlav_;}
    bool isFake() {return (genPartFlav_!=1 && genPartFlav_!=15);}
    bool isFlip() {return (id_==-1*mcid_);}
    bool is_loose() {return (idlevel_==SS::IDLevel::IDfakable || idlevel_==SS::IDLevel::IDtight);}
    bool is_tight() {return (idlevel_==SS::IDLevel::IDtight);}
    bool operator==(const Lepton& other) {return ((this->id_ == other.id()) && (this->idx_==other.idx()));}

  private:
    int id_;
    int genPartFlav_ = -1;
    int mcid_ = -1;
    float pt_ = 0.;
    float eta_ = 0.;
    float phi_ = 0.;
    LorentzVector p4_;
    float miniIso_ = -1.;
    unsigned int idx_;
    int idlevel_ = SS::IDdefault;
};

typedef std::pair<Lepton, Lepton> Hyp;
typedef std::vector<std::pair<Lepton, Lepton> > Hyps;
typedef std::vector<Lepton> Leptons;

std::ostream &operator<<(std::ostream &os, Lepton &lep) {
    std::string lepstr = (abs(lep.id()) == 11) ? "Electron" : "Muon";
    return os << "<" << lepstr << " id=" << std::showpos << setw(3) << lep.id() << std::noshowpos << ", idx=" << setw(2)
              << lep.idx() << ", level=" << lep.idlevel() << ", (pT,eta)="
              << "(" << lep.pt() << "," << lep.eta() << ")>";
}
template <typename T1, typename T2> std::ostream &operator<<(std::ostream &os, std::pair<T1, T2> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

vector<Lepton> getLeptons();
Leptons getTightLeptons();
Leptons getLooseLeptons();
std::tuple<int, int, float> getJetInfo(vector<Lepton> &leps, int variation = 0);
std::pair<int, int> makesResonance(Leptons &leps, Lepton lep1, Lepton lep2, float mass, float window);
std::pair<int, Hyp> getBestHyp(vector<Lepton> &leptons, bool verbose);
void dumpLeptonProperties(Lepton lep);
std::pair<int, Leptons> getBestHypFCNC(Leptons &leps, bool verbose);
std::pair<int,int> get_n_mu_el(Leptons &leps);

struct Jet {
    Jet(unsigned int idxx = 0) : idx_(idxx) {
        id_ = nt.Jet_jetId()[idx_];
        pt_ = nt.Jet_pt()[idx_];
        eta_ = nt.Jet_eta()[idx_];
        phi_ = nt.Jet_phi()[idx_];
        p4_ = nt.Jet_p4()[idx_];
    }
    int id() { return id_; }
    bool is_btag() { return false; } // { return ((pt_ > 25.0) && (Jet_btagDeepB()[idx_] > 0.4941)); }
    unsigned int idx() const { return idx_; }
    LorentzVector p4() { return p4_; }
    float pt() { return pt_; }
    float eta() { return eta_; }
    float phi() { return phi_; }
    float bdisc() {return nt.Jet_btagDeepFlavB()[idx_];}
    bool isBtag() {return bdisc()>0.277;}
    int hadronFlavor() {return nt.Jet_hadronFlavour()[idx_];}
    int partonFlavor() {return nt.Jet_partonFlavour()[idx_];}
    bool passJetId() {return id_>1;}
    bool operator==(const Jet& other) {return (idx_==other.idx());}

  private:
    int id_;
    float pt_ = 0.;
    float eta_ = 0.;
    float phi_ = 0.;
    LorentzVector p4_;
    unsigned int idx_;
};
typedef std::pair<Jet, Jet> DiJet;
typedef std::vector<Jet> Jets;

// perform lepton-jet overlap removal
std::vector<bool> cleanJets(Leptons &leps);
std::vector<bool> cleanJets(Jets &jets, Leptons &leps);

// get all good jets and bjets
// applies kinematic (eta,pt) cuts, jet ID, and b-tagging
std::pair<Jets, Jets> getJets(float min_jet_pt=40., float min_bjet_pt=25.);
std::pair<Jets, Jets> getJets(Leptons &leps,float min_jet_pt=40., float min_bjet_pt=25.);

//Sorting functions
bool lepsort (Lepton i,Lepton j);
bool jetptsort (Jet i,Jet j);

bool pass_lep_pt_eta(Lepton &lep);

#endif
