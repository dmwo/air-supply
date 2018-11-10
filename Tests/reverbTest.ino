#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            lineIn;         //xy=66,43
AudioEffectReverb        reverb1;        //xy=246,144
AudioMixer4              mixer1;         //xy=373,56
AudioOutputI2S           lineOut;        //xy=653,52
AudioConnection          patchCord1(lineIn, 0, mixer1, 0);
AudioConnection          patchCord2(lineIn, 1, reverb1, 0);
AudioConnection          patchCord3(reverb1, 0, mixer1, 1);
AudioConnection          patchCord4(mixer1, 0, lineOut, 0);
AudioConnection          patchCord5(mixer1, 0, lineOut, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=71,97
// GUItool: end automatically generated code
