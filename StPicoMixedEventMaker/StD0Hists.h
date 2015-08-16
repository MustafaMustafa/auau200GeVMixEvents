#ifndef StD0Hists__h
#define StD0Hists__h

/* **************************************************
 *  A class to create and save my D0 analysis histograms.
 *
 *  Authors: Mustafa Mustafa (mmustafa@lbl.gov)
 *
 * **************************************************
 */

#include "TObject.h"

class TH1I;
class TH1F;
class TH2F;
class TH3F;
class THn;
class TProfile;
class TFile;
class TString;

#include "StMixerPair.h"
#include "StMixerCuts.h"

class StD0Hists: public TObject
{
 public:
  StD0Hists(char* fileBaseName);
  virtual ~StD0Hists();
  void closeFile();
  void fillSameEvt_US_QADist(StMixerPair const&, int const);
  void fillSameEvt_LS_QADist(StMixerPair const&, int const);
  void fillMixedEvtQADist(StMixerPair const&, int const);
  //event level qa                                                                                                                
  TH2F*      hVzVpdVz;
  TH1F*      hVzDiff;
  TH2F*      hVxy;
  TH1I*      hRefMult;
  TH1I*      hGRefMult;
  TH1I*      hTrigger;
  TH1I*      hCentrality;
  TH1I*      hCentralityWeighted;

  TH2F*      hOneOverBetaDiffKaonP;
  TH2F*      hOneOverBetaDiffPionP;

  //mix event counts
  TH3F* hCentVzPsi;
  TH3F* hCentVzPsiSameEventNoWeight;
  TH3F* hCentVzPsiMixedNoWeight;
  TH3F* hCentVzPsiSameEvent;
  TH3F* hCentVzPsiMixed;

  //d0 v2 histograms
  THn* hD0CentPtEtaMDphi;
  THn* hD0CentPtEtaMDphiLikeSign;
  THn* hD0CentPtEtaMDphiMixed;
  THn* hD0CentPtEtaMDphiLikeSignMixed;

  //Topology distribution
  TH2F* mSE_Vtx[9];
  TH2F* mME_Vtx[9];
  TH2F* mSE_LS[9];
  TH2F* mSE_US[9];
  TH2F* mME_LS[9];
  TH2F* mME_US[9];
  //QA hists
  TH2F* mSE_US_PointingAngle[9];
  TH2F* mSE_US_DecayL[9];
  TH2F* mSE_US_Dca12[9];
  TH2F* mSE_US_PionDca2Vtx[9];
  TH2F* mSE_US_KaonDca2Vtx[9];
  TH2F* mSE_US_D0Dca2Vtx[9];
  //
  TH2F* mSE_LS_PointingAngle[9];
  TH2F* mSE_LS_DecayL[9];
  TH2F* mSE_LS_Dca12[9];
  TH2F* mSE_LS_PionDca2Vtx[9];
  TH2F* mSE_LS_KaonDca2Vtx[9];
  TH2F* mSE_LS_D0Dca2Vtx[9];
  //
  TH2F* mME_US_PointingAngle[9];
  TH2F* mME_US_DecayL[9];
  TH2F* mME_US_Dca12[9];
  TH2F* mME_US_PionDca2Vtx[9];
  TH2F* mME_US_KaonDca2Vtx[9];
  TH2F* mME_US_D0Dca2Vtx[9];
 private:
  
  ClassDef(StD0Hists,1);
};

#endif
