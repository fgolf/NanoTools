float electronScaleFactor_RunABCD(float pt, float eta) {
  if (pt >= 10 && pt < 20 && eta >= -2.500 && eta < -2.000) return 1.3737;
  if (pt >= 10 && pt < 20 && eta >= -2.000 && eta < -1.566) return 1.0453;
  if (pt >= 10 && pt < 20 && eta >= -1.566 && eta < -1.444) return 1.3240;
  if (pt >= 10 && pt < 20 && eta >= -1.444 && eta < -0.800) return 0.9262;
  if (pt >= 10 && pt < 20 && eta >= -0.800 && eta < 0.000) return 0.8536;
  if (pt >= 10 && pt < 20 && eta >= 0.000 && eta < 0.800) return 0.9133;
  if (pt >= 10 && pt < 20 && eta >= 0.800 && eta < 1.444) return 0.9344;
  if (pt >= 10 && pt < 20 && eta >= 1.444 && eta < 1.566) return 1.2237;
  if (pt >= 10 && pt < 20 && eta >= 1.566 && eta < 2.000) return 1.0047;
  if (pt >= 10 && pt < 20 && eta >= 2.000 && eta < 2.500) return 1.3372;
  if (pt >= 20 && pt < 35 && eta >= -2.500 && eta < -2.000) return 1.0673;
  if (pt >= 20 && pt < 35 && eta >= -2.000 && eta < -1.566) return 0.9401;
  if (pt >= 20 && pt < 35 && eta >= -1.566 && eta < -1.444) return 0.9614;
  if (pt >= 20 && pt < 35 && eta >= -1.444 && eta < -0.800) return 0.8841;
  if (pt >= 20 && pt < 35 && eta >= -0.800 && eta < 0.000) return 0.8877;
  if (pt >= 20 && pt < 35 && eta >= 0.000 && eta < 0.800) return 0.8955;
  if (pt >= 20 && pt < 35 && eta >= 0.800 && eta < 1.444) return 0.8932;
  if (pt >= 20 && pt < 35 && eta >= 1.444 && eta < 1.566) return 0.9316;
  if (pt >= 20 && pt < 35 && eta >= 1.566 && eta < 2.000) return 0.9295;
  if (pt >= 20 && pt < 35 && eta >= 2.000 && eta < 2.500) return 1.0471;
  if (pt >= 35 && pt < 50 && eta >= -2.500 && eta < -2.000) return 0.9891;
  if (pt >= 35 && pt < 50 && eta >= -2.000 && eta < -1.566) return 0.9352;
  if (pt >= 35 && pt < 50 && eta >= -1.566 && eta < -1.444) return 0.9598;
  if (pt >= 35 && pt < 50 && eta >= -1.444 && eta < -0.800) return 0.9237;
  if (pt >= 35 && pt < 50 && eta >= -0.800 && eta < 0.000) return 0.9294;
  if (pt >= 35 && pt < 50 && eta >= 0.000 && eta < 0.800) return 0.9346;
  if (pt >= 35 && pt < 50 && eta >= 0.800 && eta < 1.444) return 0.9231;
  if (pt >= 35 && pt < 50 && eta >= 1.444 && eta < 1.566) return 0.9421;
  if (pt >= 35 && pt < 50 && eta >= 1.566 && eta < 2.000) return 0.9343;
  if (pt >= 35 && pt < 50 && eta >= 2.000 && eta < 2.500) return 0.9709;
  if (pt >= 50 && pt < 100 && eta >= -2.500 && eta < -2.000) return 0.9433;
  if (pt >= 50 && pt < 100 && eta >= -2.000 && eta < -1.566) return 0.9310;
  if (pt >= 50 && pt < 100 && eta >= -1.566 && eta < -1.444) return 0.9751;
  if (pt >= 50 && pt < 100 && eta >= -1.444 && eta < -0.800) return 0.9311;
  if (pt >= 50 && pt < 100 && eta >= -0.800 && eta < 0.000) return 0.9367;
  if (pt >= 50 && pt < 100 && eta >= 0.000 && eta < 0.800) return 0.9417;
  if (pt >= 50 && pt < 100 && eta >= 0.800 && eta < 1.444) return 0.9354;
  if (pt >= 50 && pt < 100 && eta >= 1.444 && eta < 1.566) return 0.9530;
  if (pt >= 50 && pt < 100 && eta >= 1.566 && eta < 2.000) return 0.9366;
  if (pt >= 50 && pt < 100 && eta >= 2.000 && eta < 2.500) return 0.9212;
  if (pt >= 100 && pt < 200 && eta >= -2.500 && eta < -2.000) return 0.9245;
  if (pt >= 100 && pt < 200 && eta >= -2.000 && eta < -1.566) return 0.9250;
  if (pt >= 100 && pt < 200 && eta >= -1.566 && eta < -1.444) return 0.9432;
  if (pt >= 100 && pt < 200 && eta >= -1.444 && eta < -0.800) return 0.9448;
  if (pt >= 100 && pt < 200 && eta >= -0.800 && eta < 0.000) return 0.9443;
  if (pt >= 100 && pt < 200 && eta >= 0.000 && eta < 0.800) return 0.9626;
  if (pt >= 100 && pt < 200 && eta >= 0.800 && eta < 1.444) return 0.9644;
  if (pt >= 100 && pt < 200 && eta >= 1.444 && eta < 1.566) return 1.0114;
  if (pt >= 100 && pt < 200 && eta >= 1.566 && eta < 2.000) return 0.8989;
  if (pt >= 100 && pt < 200 && eta >= 2.000 && eta < 2.500) return 0.8736;
  if (pt >= 200  && eta >= -2.500 && eta < -2.000) return 0.9371;
  if (pt >= 200  && eta >= -2.000 && eta < -1.566) return 0.9500;
  if (pt >= 200  && eta >= -1.566 && eta < -1.444) return 0.8901;
  if (pt >= 200  && eta >= -1.444 && eta < -0.800) return 0.9460;
  if (pt >= 200  && eta >= -0.800 && eta < 0.000) return 0.9635;
  if (pt >= 200  && eta >= 0.000 && eta < 0.800) return 0.9709;
  if (pt >= 200  && eta >= 0.800 && eta < 1.444) return 0.8999;
  if (pt >= 200  && eta >= 1.444 && eta < 1.566) return 0.9646;
  if (pt >= 200  && eta >= 1.566 && eta < 2.000) return 0.9169;
  if (pt >= 200  && eta >= 2.000 && eta < 2.500) return 1.0113;
  return 0.0;
}

float electronScaleFactorError_RunABCD(float pt, float eta) {
  if (pt >= 10 && pt < 20 && eta >= -2.500 && eta < -2.000) return 0.0487;
  if (pt >= 10 && pt < 20 && eta >= -2.000 && eta < -1.566) return 0.0390;
  if (pt >= 10 && pt < 20 && eta >= -1.566 && eta < -1.444) return 0.1111;
  if (pt >= 10 && pt < 20 && eta >= -1.444 && eta < -0.800) return 0.0269;
  if (pt >= 10 && pt < 20 && eta >= -0.800 && eta < 0.000) return 0.0234;
  if (pt >= 10 && pt < 20 && eta >= 0.000 && eta < 0.800) return 0.0241;
  if (pt >= 10 && pt < 20 && eta >= 0.800 && eta < 1.444) return 0.0270;
  if (pt >= 10 && pt < 20 && eta >= 1.444 && eta < 1.566) return 0.1053;
  if (pt >= 10 && pt < 20 && eta >= 1.566 && eta < 2.000) return 0.0380;
  if (pt >= 10 && pt < 20 && eta >= 2.000 && eta < 2.500) return 0.0477;
  if (pt >= 20 && pt < 35 && eta >= -2.500 && eta < -2.000) return 0.0376;
  if (pt >= 20 && pt < 35 && eta >= -2.000 && eta < -1.566) return 0.0247;
  if (pt >= 20 && pt < 35 && eta >= -1.566 && eta < -1.444) return 0.0442;
  if (pt >= 20 && pt < 35 && eta >= -1.444 && eta < -0.800) return 0.0202;
  if (pt >= 20 && pt < 35 && eta >= -0.800 && eta < 0.000) return 0.0150;
  if (pt >= 20 && pt < 35 && eta >= 0.000 && eta < 0.800) return 0.0150;
  if (pt >= 20 && pt < 35 && eta >= 0.800 && eta < 1.444) return 0.0204;
  if (pt >= 20 && pt < 35 && eta >= 1.444 && eta < 1.566) return 0.0432;
  if (pt >= 20 && pt < 35 && eta >= 1.566 && eta < 2.000) return 0.0246;
  if (pt >= 20 && pt < 35 && eta >= 2.000 && eta < 2.500) return 0.0372;
  if (pt >= 35 && pt < 50 && eta >= -2.500 && eta < -2.000) return 0.0078;
  if (pt >= 35 && pt < 50 && eta >= -2.000 && eta < -1.566) return 0.0085;
  if (pt >= 35 && pt < 50 && eta >= -1.566 && eta < -1.444) return 0.0058;
  if (pt >= 35 && pt < 50 && eta >= -1.444 && eta < -0.800) return 0.0062;
  if (pt >= 35 && pt < 50 && eta >= -0.800 && eta < 0.000) return 0.0044;
  if (pt >= 35 && pt < 50 && eta >= 0.000 && eta < 0.800) return 0.0044;
  if (pt >= 35 && pt < 50 && eta >= 0.800 && eta < 1.444) return 0.0062;
  if (pt >= 35 && pt < 50 && eta >= 1.444 && eta < 1.566) return 0.0058;
  if (pt >= 35 && pt < 50 && eta >= 1.566 && eta < 2.000) return 0.0085;
  if (pt >= 35 && pt < 50 && eta >= 2.000 && eta < 2.500) return 0.0077;
  if (pt >= 50 && pt < 100 && eta >= -2.500 && eta < -2.000) return 0.0111;
  if (pt >= 50 && pt < 100 && eta >= -2.000 && eta < -1.566) return 0.0127;
  if (pt >= 50 && pt < 100 && eta >= -1.566 && eta < -1.444) return 0.0164;
  if (pt >= 50 && pt < 100 && eta >= -1.444 && eta < -0.800) return 0.0107;
  if (pt >= 50 && pt < 100 && eta >= -0.800 && eta < 0.000) return 0.0087;
  if (pt >= 50 && pt < 100 && eta >= 0.000 && eta < 0.800) return 0.0088;
  if (pt >= 50 && pt < 100 && eta >= 0.800 && eta < 1.444) return 0.0108;
  if (pt >= 50 && pt < 100 && eta >= 1.444 && eta < 1.566) return 0.0164;
  if (pt >= 50 && pt < 100 && eta >= 1.566 && eta < 2.000) return 0.0127;
  if (pt >= 50 && pt < 100 && eta >= 2.000 && eta < 2.500) return 0.0110;
  if (pt >= 100 && pt < 200 && eta >= -2.500 && eta < -2.000) return 0.0477;
  if (pt >= 100 && pt < 200 && eta >= -2.000 && eta < -1.566) return 0.0210;
  if (pt >= 100 && pt < 200 && eta >= -1.566 && eta < -1.444) return 0.0769;
  if (pt >= 100 && pt < 200 && eta >= -1.444 && eta < -0.800) return 0.0103;
  if (pt >= 100 && pt < 200 && eta >= -0.800 && eta < 0.000) return 0.0116;
  if (pt >= 100 && pt < 200 && eta >= 0.000 && eta < 0.800) return 0.0119;
  if (pt >= 100 && pt < 200 && eta >= 0.800 && eta < 1.444) return 0.0106;
  if (pt >= 100 && pt < 200 && eta >= 1.444 && eta < 1.566) return 0.0811;
  if (pt >= 100 && pt < 200 && eta >= 1.566 && eta < 2.000) return 0.0208;
  if (pt >= 100 && pt < 200 && eta >= 2.000 && eta < 2.500) return 0.0465;
  if (pt >= 200  && eta >= -2.500 && eta < -2.000) return 0.1736;
  if (pt >= 200  && eta >= -2.000 && eta < -1.566) return 0.0661;
  if (pt >= 200  && eta >= -1.566 && eta < -1.444) return 0.0992;
  if (pt >= 200  && eta >= -1.444 && eta < -0.800) return 0.0433;
  if (pt >= 200  && eta >= -0.800 && eta < 0.000) return 0.0247;
  if (pt >= 200  && eta >= 0.000 && eta < 0.800) return 0.0250;
  if (pt >= 200  && eta >= 0.800 && eta < 1.444) return 0.0424;
  if (pt >= 200  && eta >= 1.444 && eta < 1.566) return 0.1087;
  if (pt >= 200  && eta >= 1.566 && eta < 2.000) return 0.0624;
  if (pt >= 200  && eta >= 2.000 && eta < 2.500) return 0.1824;
  return 0.0;
}

float electronScaleFactorReco_RunABCD(float pt, float eta) {
  if (pt >= 10 && pt < 20 && eta >= -2.500 && eta < -2.000) return 1.0115;
  if (pt >= 10 && pt < 20 && eta >= -2.000 && eta < -1.566) return 0.9724;
  if (pt >= 10 && pt < 20 && eta >= -1.566 && eta < -1.444) return 1.4158;
  if (pt >= 10 && pt < 20 && eta >= -1.444 && eta < -1.000) return 1.0163;
  if (pt >= 10 && pt < 20 && eta >= -1.000 && eta < -0.500) return 0.9095;
  if (pt >= 10 && pt < 20 && eta >= -0.500 && eta < 0.000) return 1.0000;
  if (pt >= 10 && pt < 20 && eta >= 0.000 && eta < 0.500) return 1.0000;
  if (pt >= 10 && pt < 20 && eta >= 0.500 && eta < 1.000) return 0.9095;
  if (pt >= 10 && pt < 20 && eta >= 1.000 && eta < 1.444) return 1.0163;
  if (pt >= 10 && pt < 20 && eta >= 1.444 && eta < 1.566) return 1.4158;
  if (pt >= 10 && pt < 20 && eta >= 1.566 && eta < 2.000) return 0.9724;
  if (pt >= 10 && pt < 20 && eta >= 2.000 && eta < 2.500) return 1.0115;
  if (pt >= 20 && pt < 45 && eta >= -2.500 && eta < -2.000) return 0.9886;
  if (pt >= 20 && pt < 45 && eta >= -2.000 && eta < -1.566) return 0.9908;
  if (pt >= 20 && pt < 45 && eta >= -1.566 && eta < -1.444) return 0.9815;
  if (pt >= 20 && pt < 45 && eta >= -1.444 && eta < -1.000) return 0.9875;
  if (pt >= 20 && pt < 45 && eta >= -1.000 && eta < -0.500) return 0.9897;
  if (pt >= 20 && pt < 45 && eta >= -0.500 && eta < 0.000) return 0.9856;
  if (pt >= 20 && pt < 45 && eta >= 0.000 && eta < 0.500) return 0.9835;
  if (pt >= 20 && pt < 45 && eta >= 0.500 && eta < 1.000) return 0.9866;
  if (pt >= 20 && pt < 45 && eta >= 1.000 && eta < 1.444) return 0.9844;
  if (pt >= 20 && pt < 45 && eta >= 1.444 && eta < 1.566) return 0.9848;
  if (pt >= 20 && pt < 45 && eta >= 1.566 && eta < 2.000) return 0.9887;
  if (pt >= 20 && pt < 45 && eta >= 2.000 && eta < 2.500) return 0.9918;
  if (pt >= 45 && pt < 75 && eta >= -2.500 && eta < -2.000) return 0.9846;
  if (pt >= 45 && pt < 75 && eta >= -2.000 && eta < -1.566) return 0.9908;
  if (pt >= 45 && pt < 75 && eta >= -1.566 && eta < -1.444) return 0.9591;
  if (pt >= 45 && pt < 75 && eta >= -1.444 && eta < -1.000) return 0.9887;
  if (pt >= 45 && pt < 75 && eta >= -1.000 && eta < -0.500) return 0.9908;
  if (pt >= 45 && pt < 75 && eta >= -0.500 && eta < 0.000) return 0.9887;
  if (pt >= 45 && pt < 75 && eta >= 0.000 && eta < 0.500) return 0.9866;
  if (pt >= 45 && pt < 75 && eta >= 0.500 && eta < 1.000) return 0.9887;
  if (pt >= 45 && pt < 75 && eta >= 1.000 && eta < 1.444) return 0.9824;
  if (pt >= 45 && pt < 75 && eta >= 1.444 && eta < 1.566) return 0.9727;
  if (pt >= 45 && pt < 75 && eta >= 1.566 && eta < 2.000) return 0.9908;
  if (pt >= 45 && pt < 75 && eta >= 2.000 && eta < 2.500) return 0.9857;
  if (pt >= 75 && pt < 100 && eta >= -2.500 && eta < -2.000) return 1.0010;
  if (pt >= 75 && pt < 100 && eta >= -2.000 && eta < -1.566) return 1.0061;
  if (pt >= 75 && pt < 100 && eta >= -1.566 && eta < -1.444) return 1.0467;
  if (pt >= 75 && pt < 100 && eta >= -1.444 && eta < -1.000) return 1.0051;
  if (pt >= 75 && pt < 100 && eta >= -1.000 && eta < -0.500) return 1.0020;
  if (pt >= 75 && pt < 100 && eta >= -0.500 && eta < 0.000) return 1.0061;
  if (pt >= 75 && pt < 100 && eta >= 0.000 && eta < 0.500) return 1.0061;
  if (pt >= 75 && pt < 100 && eta >= 0.500 && eta < 1.000) return 1.0020;
  if (pt >= 75 && pt < 100 && eta >= 1.000 && eta < 1.444) return 1.0051;
  if (pt >= 75 && pt < 100 && eta >= 1.444 && eta < 1.566) return 1.0467;
  if (pt >= 75 && pt < 100 && eta >= 1.566 && eta < 2.000) return 1.0061;
  if (pt >= 75 && pt < 100 && eta >= 2.000 && eta < 2.500) return 1.0010;
  if (pt >= 100  && eta >= -2.500 && eta < -2.000) return 1.0072;
  if (pt >= 100  && eta >= -2.000 && eta < -1.566) return 0.9919;
  if (pt >= 100  && eta >= -1.566 && eta < -1.444) return 0.9837;
  if (pt >= 100  && eta >= -1.444 && eta < -1.000) return 1.0010;
  if (pt >= 100  && eta >= -1.000 && eta < -0.500) return 1.0010;
  if (pt >= 100  && eta >= -0.500 && eta < 0.000) return 0.9869;
  if (pt >= 100  && eta >= 0.000 && eta < 0.500) return 0.9869;
  if (pt >= 100  && eta >= 0.500 && eta < 1.000) return 1.0010;
  if (pt >= 100  && eta >= 1.000 && eta < 1.444) return 1.0010;
  if (pt >= 100  && eta >= 1.444 && eta < 1.566) return 0.9837;
  if (pt >= 100  && eta >= 1.566 && eta < 2.000) return 0.9919;
  if (pt >= 100  && eta >= 2.000 && eta < 2.500) return 1.0072;
  return 0.0;
}

float electronScaleFactorRecoError_RunABCD(float pt, float eta) {
  if (pt >= 10 && pt < 20 && eta >= -2.500 && eta < -2.000) return 0.0105;
  if (pt >= 10 && pt < 20 && eta >= -2.000 && eta < -1.566) return 0.0131;
  if (pt >= 10 && pt < 20 && eta >= -1.566 && eta < -1.444) return 0.0565;
  if (pt >= 10 && pt < 20 && eta >= -1.444 && eta < -1.000) return 0.0153;
  if (pt >= 10 && pt < 20 && eta >= -1.000 && eta < -0.500) return 0.0160;
  if (pt >= 10 && pt < 20 && eta >= -0.500 && eta < 0.000) return 0.0202;
  if (pt >= 10 && pt < 20 && eta >= 0.000 && eta < 0.500) return 0.0202;
  if (pt >= 10 && pt < 20 && eta >= 0.500 && eta < 1.000) return 0.0160;
  if (pt >= 10 && pt < 20 && eta >= 1.000 && eta < 1.444) return 0.0153;
  if (pt >= 10 && pt < 20 && eta >= 1.444 && eta < 1.566) return 0.0565;
  if (pt >= 10 && pt < 20 && eta >= 1.566 && eta < 2.000) return 0.0131;
  if (pt >= 10 && pt < 20 && eta >= 2.000 && eta < 2.500) return 0.0105;
  if (pt >= 20 && pt < 45 && eta >= -2.500 && eta < -2.000) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= -2.000 && eta < -1.566) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= -1.566 && eta < -1.444) return 0.0029;
  if (pt >= 20 && pt < 45 && eta >= -1.444 && eta < -1.000) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= -1.000 && eta < -0.500) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= -0.500 && eta < 0.000) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= 0.000 && eta < 0.500) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= 0.500 && eta < 1.000) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= 1.000 && eta < 1.444) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= 1.444 && eta < 1.566) return 0.0031;
  if (pt >= 20 && pt < 45 && eta >= 1.566 && eta < 2.000) return 0.0015;
  if (pt >= 20 && pt < 45 && eta >= 2.000 && eta < 2.500) return 0.0015;
  if (pt >= 45 && pt < 75 && eta >= -2.500 && eta < -2.000) return 0.0014;
  if (pt >= 45 && pt < 75 && eta >= -2.000 && eta < -1.566) return 0.0014;
  if (pt >= 45 && pt < 75 && eta >= -1.566 && eta < -1.444) return 0.0041;
  if (pt >= 45 && pt < 75 && eta >= -1.444 && eta < -1.000) return 0.0015;
  if (pt >= 45 && pt < 75 && eta >= -1.000 && eta < -0.500) return 0.0014;
  if (pt >= 45 && pt < 75 && eta >= -0.500 && eta < 0.000) return 0.0015;
  if (pt >= 45 && pt < 75 && eta >= 0.000 && eta < 0.500) return 0.0015;
  if (pt >= 45 && pt < 75 && eta >= 0.500 && eta < 1.000) return 0.0014;
  if (pt >= 45 && pt < 75 && eta >= 1.000 && eta < 1.444) return 0.0015;
  if (pt >= 45 && pt < 75 && eta >= 1.444 && eta < 1.566) return 0.0044;
  if (pt >= 45 && pt < 75 && eta >= 1.566 && eta < 2.000) return 0.0014;
  if (pt >= 45 && pt < 75 && eta >= 2.000 && eta < 2.500) return 0.0014;
  if (pt >= 75 && pt < 100 && eta >= -2.500 && eta < -2.000) return 0.0065;
  if (pt >= 75 && pt < 100 && eta >= -2.000 && eta < -1.566) return 0.0051;
  if (pt >= 75 && pt < 100 && eta >= -1.566 && eta < -1.444) return 0.0220;
  if (pt >= 75 && pt < 100 && eta >= -1.444 && eta < -1.000) return 0.0051;
  if (pt >= 75 && pt < 100 && eta >= -1.000 && eta < -0.500) return 0.0037;
  if (pt >= 75 && pt < 100 && eta >= -0.500 && eta < 0.000) return 0.0037;
  if (pt >= 75 && pt < 100 && eta >= 0.000 && eta < 0.500) return 0.0037;
  if (pt >= 75 && pt < 100 && eta >= 0.500 && eta < 1.000) return 0.0037;
  if (pt >= 75 && pt < 100 && eta >= 1.000 && eta < 1.444) return 0.0051;
  if (pt >= 75 && pt < 100 && eta >= 1.444 && eta < 1.566) return 0.0220;
  if (pt >= 75 && pt < 100 && eta >= 1.566 && eta < 2.000) return 0.0051;
  if (pt >= 75 && pt < 100 && eta >= 2.000 && eta < 2.500) return 0.0065;
  if (pt >= 100  && eta >= -2.500 && eta < -2.000) return 0.0096;
  if (pt >= 100  && eta >= -2.000 && eta < -1.566) return 0.0065;
  if (pt >= 100  && eta >= -1.566 && eta < -1.444) return 0.0343;
  if (pt >= 100  && eta >= -1.444 && eta < -1.000) return 0.0074;
  if (pt >= 100  && eta >= -1.000 && eta < -0.500) return 0.0051;
  if (pt >= 100  && eta >= -0.500 && eta < 0.000) return 0.0043;
  if (pt >= 100  && eta >= 0.000 && eta < 0.500) return 0.0043;
  if (pt >= 100  && eta >= 0.500 && eta < 1.000) return 0.0051;
  if (pt >= 100  && eta >= 1.000 && eta < 1.444) return 0.0074;
  if (pt >= 100  && eta >= 1.444 && eta < 1.566) return 0.0343;
  if (pt >= 100  && eta >= 1.566 && eta < 2.000) return 0.0065;
  if (pt >= 100  && eta >= 2.000 && eta < 2.500) return 0.0096;
  return 0.0;
}
