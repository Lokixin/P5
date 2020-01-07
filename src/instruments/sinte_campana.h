#ifndef SINTE_CAMPANA
#define SINTE_CAMPANA

#include <vector>
#include <string>
#include "instrument.h"
#include "envelope_adsr.h"

namespace upc {
  class Sinte_Campana: public upc::Instrument {
    EnvelopeADSR adsr;
    unsigned int index;
    double alpha, betha, tetha, phi;
	  float A, N1, N2, carrier_freq, modul_freq, cm, difm, vel, fm;
    std::vector<float> tbl;
  public:
    Sinte_Campana(const std::string &param = "");
    void command(long cmd, long note, long velocity=1);
    const std::vector<float> & synthesize();
    bool is_active() const {return bActive;}
  };
}

#endif