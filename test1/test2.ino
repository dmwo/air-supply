#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            lineIn;           //xy=62,32
AudioEffectBitcrusher    bitcrusher1;    //xy=224,327
AudioEffectReverb        reverb1;        //xy=235,27
AudioEffectMultiply      multiply1;      //xy=348,207
AudioEffectMultiply      multiply2;      //xy=372,328
AudioSynthNoiseWhite     noise1;         //xy=377,25
AudioEffectEnvelope      envelope1;      //xy=518,31
AudioMixer4              mixer1;         //xy=563,180
AudioEffectChorus        chorus1;        //xy=763,112
AudioOutputI2S           lineOut;           //xy=777,515
AudioConnection          patchCord1(lineIn, 0, reverb1, 0);
AudioConnection          patchCord2(lineIn, 1, bitcrusher1, 0);
AudioConnection          patchCord3(lineIn, 1, multiply1, 1);
AudioConnection          patchCord4(bitcrusher1, 0, multiply2, 0);
AudioConnection          patchCord5(bitcrusher1, 0, multiply2, 1);
AudioConnection          patchCord6(reverb1, 0, multiply1, 0);
AudioConnection          patchCord7(multiply1, 0, mixer1, 1);
AudioConnection          patchCord8(multiply2, 0, mixer1, 2);
AudioConnection          patchCord9(noise1, envelope1);
AudioConnection          patchCord10(envelope1, 0, mixer1, 0);
AudioConnection          patchCord11(mixer1, chorus1);
AudioConnection          patchCord12(chorus1, 0, lineOut, 0);
AudioConnection          patchCord13(chorus1, 0, lineOut, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=67.5,86
// GUItool: end automatically generated code
