#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            lineIn;         //xy=66,43
AudioEffectChorus        chorus1;        //xy=446,45
AudioOutputI2S           lineOut;        //xy=653,52
AudioConnection          patchCord1(lineIn, 0, chorus1, 0);
AudioConnection          patchCord2(chorus1, 0, lineOut, 0);
AudioConnection          patchCord3(chorus1, 0, lineOut, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=71,97
// GUItool: end automatically generated code
