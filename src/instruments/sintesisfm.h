#ifndef SINTESISFM
#define SINTESISFM

#include <vector>
#include <string>
#include "instrument.h"
#include "envelope_adsr.h"

namespace upc {
  class SintesisFM: public upc::Instrument {
    EnvelopeADSR adsr;
    unsigned int index;
    double alpha, betha, tetha, phi;
	  float A, I, vel, fm;
    std::vector<float> tbl;
  public:
    SintesisFM(const std::string &param = "");
    void command(long cmd, long note, long velocity=1);
    const std::vector<float> & synthesize();
    bool is_active() const {return bActive;}
  };
}

#endif
