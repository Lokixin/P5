#ifndef GUITAR
#define GUITAR

#include <vector>
#include <string>
#include "instrument.h"
#include "envelope_adsr.h"

namespace upc {
  class Guitar: public upc::Instrument {
    EnvelopeADSR adsr;
    unsigned int index;
	  float A, f0;
    float step;
    std::vector<float> tbl;
  public:
    Guitar(const std::string &param = "");
    void command(long cmd, long note, long velocity=1); 
    const std::vector<float> & synthesize();
    bool is_active() const {return bActive;} 
  };
}

#endif
