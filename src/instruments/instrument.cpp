#include <iostream>
#include "instrument_dumb.h"
#include "seno.h"
#include "guitar.h"
#include "generico.h"
#include "plano.h"
#include "vibratoFM.h"

/*
  For each new instrument:
  - Add the header in this file
  - Add the call to the constructor in get_instrument() (also in this file)
  - Add the source file to src/meson.build
*/

using namespace std;

namespace upc {
  Instrument * get_instrument(const string &name, const string &parameters) {
    Instrument * pInst = 0;

    if (name == "InstrumentDumb") {
      pInst = (Instrument *) new InstrumentDumb(parameters);
    }else if (name == "Seno"){
      pInst = (Instrument *) new Seno(parameters);
    }else if (name == "Guitar"){
      pInst = (Instrument *) new Guitar(parameters);
    }else if (name == "Generico"){
      pInst = (Instrument *) new Generico(parameters);
    }else if (name == "Plano"){
      pInst = (Instrument *) new Plano(parameters);
    }else if (name == "VibratoFM"){
      pInst = (Instrument *) new VibratoFM(parameters);
    }
    
    return pInst;
  }
}
