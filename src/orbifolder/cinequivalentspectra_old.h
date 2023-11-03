
#ifndef CINEQUIVALENTSPECTRA_H
#define CINEQUIVALENTSPECTRA_H

#include "cspectrum.h"
#include <vector>

class CInequivalentModels{
public:
// member functions
  CInequivalentModels();
  ~CInequivalentModels();

  bool IsSpectrumUnknown(const CSpectrum &Spectrum, bool AddNewModel);
    
// member variables
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank00;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank01;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank02;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank03;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank04;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank05;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank06;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank07;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank08;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank09;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank10;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank11;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank12;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank13;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank14;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank15;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c1_Rank16;

  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank00;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank01;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank02;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank03;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank04;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank05;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank06;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank07;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank08;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank09;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank10;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank11;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank12;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank13;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank14;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank15;
  vector<vector<vector<CSpectrum> > > InequivalentModels_c2_Rank16;

    /*
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank00;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank01;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank02;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank03;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank04;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank05;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank06;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank07;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank08;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank09;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank10;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank11;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank12;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank13;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank14;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank15;
  vector<vector<CSpectrum> > InequivalentModels_c1_Rank16;

  vector<vector<CSpectrum> > InequivalentModels_c2_Rank00;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank01;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank02;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank03;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank04;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank05;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank06;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank07;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank08;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank09;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank10;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank11;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank12;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank13;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank14;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank15;
  vector<vector<CSpectrum> > InequivalentModels_c2_Rank16;
  */

private:
  unsigned ModelCounter;
};

#endif
