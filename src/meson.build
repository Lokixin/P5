# Programas del proyecto

sources = [
	'instruments/instrument.cpp',
	'instruments/seno.cpp',
	'instruments/guitar.cpp',
	'instruments/instrument_dumb.cpp',
	'instruments/generico.cpp',
	'instruments/plano.cpp',
	'instruments/vibratoFM.cpp',
	'instruments/sinte_metal.cpp',
	'instruments/sinte_campana.cpp',
	'instruments/sinte_basoon.cpp',
	'instruments/sinte_drums.cpp',
	'instruments/sinte_clarinete.cpp',
	'instruments/sintesisfm.cpp',
	'synth/envelope_adsr.cpp',
	'synth/midi_score.cpp',
	'synth/multinote_instr.cpp',
	'synth/orchest.cpp',
	'synth/synthesizer.cpp',
	'effects/effect.cpp',
	'effects/tremolo.cpp',
	'effects/vibrato.cpp',
]

executable(
    'synth',
    sources: sources,
    include_directories: inc,
    link_args: ['-lm', '-lsndfile'],
    link_with: lib_pav,
    install: true,
)
