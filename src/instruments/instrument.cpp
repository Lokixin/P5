#include <iostream>
#include "instrument_dumb.h"
#include "seno.h"
#include "guitar.h"
#include "generico.h"
#include "plano.h"
#include "vibratoFM.h"
#include "sinte_campana.h"
#include "sinte_metal.h"
#include "sinte_basoon.h"
#include "sinte_clarinete.h"
#include "sinte_drums.h"
#include "sintesisfm.h"

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
    } else if (name == "SintesisFM") {
      pInst = (Instrument *) new SintesisFM(parameters);
    }
    else if (name == "Sinte_Clarinete") {
      pInst = (Instrument *) new Sinte_Clarinete(parameters);
    }
    else if (name == "Sinte_Campana") {
      pInst = (Instrument *) new Sinte_Campana(parameters);
    }
    else if (name == "Sinte_Drums") {
      pInst = (Instrument *) new Sinte_Drums(parameters);
    }
    else if (name == "Sinte_Metal") {
      pInst = (Instrument *) new Sinte_Metal(parameters);
    }
    else if (name == "Sinte_Basoon") {
      pInst = (Instrument *) new Sinte_Basoon(parameters);
    }

    
    return pInst;
  }
}
