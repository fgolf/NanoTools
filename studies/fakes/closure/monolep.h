#ifndef MONOLEP_H
#define MONOLEP_H

enum MonolepID {
    no_lepton = -1,
    single_el = 0,
    single_mu = 1
};

class MonolepTree {

    /**
     * TTree automatically generated by mktree
     */
    
    /* Initialize branches */
    TBranch* b_event;
    TBranch* b_met;
    TBranch* b_weight;
    TBranch* b_error;
    TBranch* b_flav_weight;
    TBranch* b_flav_error;
    TBranch* b_lepton_id;
    TBranch* b_lepton_pt;
    TBranch* b_lepton_eta;
    TBranch* b_lepton_gen_match;
    TBranch* b_lepton_is_loose;
    TBranch* b_lepton_is_tight;
    TBranch* b_fake_id;
    TBranch* b_fake_pt;
    TBranch* b_fake_pt_corr;
    TBranch* b_fake_eta;
    TBranch* b_fake_gen_match;
    TBranch* b_fake_is_loose;
    TBranch* b_fake_is_tight;
    TBranch* b_fake_unmatched;
    TBranch* b_fake_from_b;
    TBranch* b_fake_from_c;
    TBranch* b_fake_from_light;
    TBranch* b_n_jets;
    TBranch* b_n_btags_deepCSV_loose;
    TBranch* b_n_btags_deepCSV_medium;
    TBranch* b_n_btags_deepCSV_tight;
    TBranch* b_n_btags_deepJet_loose;
    TBranch* b_n_btags_deepJet_medium;
    TBranch* b_n_btags_deepJet_tight;

    public:

        // TTree and TFile
        TTree* ttree;
        TFile* tfile;

        /* Initialize branch values */
        int event;
        float met;
        float weight;
        float error;
        float flav_weight;
        float flav_error;
        int lepton_id;
        float lepton_pt;
        float lepton_eta;
        bool lepton_is_loose;
        bool lepton_is_tight;
        int fake_id;
        float fake_pt;
        float fake_pt_corr;
        float fake_eta;
        int fake_gen_match;
        bool fake_is_loose;
        bool fake_is_tight;
        bool fake_unmatched;
        bool fake_from_b;
        bool fake_from_c;
        bool fake_from_light;
        int n_jets;
        int n_btags_deepCSV_loose;
        int n_btags_deepCSV_medium;
        int n_btags_deepCSV_tight;
        int n_btags_deepJet_loose;
        int n_btags_deepJet_medium;
        int n_btags_deepJet_tight;

        /* Methods */
        // Constructor
        MonolepTree(TFile* new_tfile);
        // Reset variables
        void resetBranches();
        // Fillers
        int fillBranches();
        // Other
        void fillLeptonBranches(Lepton lepton, bool is_prompt);
        void fillTTree();
        void writeTFile();
        bool isPromptLepton(Lepton lepton);
        pair<float, float> getFakeRate(Lepton lepton);
        pair<float, float> getFlavFakeRate(Lepton lepton, int fake_gen_match);
};

#endif
    
