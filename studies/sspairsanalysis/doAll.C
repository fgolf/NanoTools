{

    gROOT->ProcessLine(".L /home/users/ian/NanoTools/NanoCORE/NANO_CORE.so");
//    gROOT->ProcessLine(".L /home/users/ian/NanoTools/studies/sspairsanalysis/sspairs.C++");
    gROOT->ProcessLine(".L /home/users/ian/NanoTools/studies/sspairsanalysis/ScanChain.C++");
    TChain *ch = new TChain("Events");

    // ch->Add("/hadoop/cms/store/user/jguiang/ProjectMetis/VBSWWHLEP_TuneCP5_13TeV-madgraph-pythia8_checkv4_07_2_100KE_PRIVATE_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1_NANOAODSIM__v2/output_1.root");
//    ch->Add("/hadoop/cms/store/user/jguiang/ProjectMetis/VBSWWH_TuneCP5_13TeV_madgraph_pythia8_checkv4_01_2_100KE_PRIVATE_RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14-v1_NANOAODSIM__v2/output_1.root");
//    ch->Add("/hadoop/cms/store/user/jguiang/validation/nano/ttbar_semileptonic_RunIISummer16NanoAODv7_0.root");
//    ch->Add("/hadoop/cms/store/user/phchang/VBSHWWNanoSkim/v9/TTJets_DiLept_TuneCP5_13TeV-madgraphMLM-pythia8_RunIIAutumn18NanoAODv6-Nano25Oct2019_102X_upgrade2018_realistic_v20-v1_NANOAODSIM_v9/output_*.root");
//    ch->Add("/home/users/ian/NanoTools/studies/sspairsanalysis/samples/RunIISummer16NanoAOD/ttHTobb.root");
    ch->Add("/home/users/ian/NanoTools/studies/sspairsanalysis/samples/RunIIFall17NanoAOD/ttHTobb.root");
    ch->Add("/home/users/ian/NanoTools/studies/sspairsanalysis/samples/RunIIAutumn18NanoAOD/ttHTobb.root");
    ScanChain(ch);
}
