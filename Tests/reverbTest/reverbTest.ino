#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S lineIn;      //xy=66,43
AudioEffectReverb reverb1; //xy=246,144
AudioMixer4 mixer1;        //xy=373,56
AudioOutputI2S lineOut;    //xy=653,52
AudioConnection patchCord1(lineIn, 0, mixer1, 0);
AudioConnection patchCord2(lineIn, 1, reverb1, 0);
AudioConnection patchCord3(reverb1, 0, mixer1, 1);
AudioConnection patchCord4(mixer1, 0, lineOut, 0);
AudioConnection patchCord5(mixer1, 0, lineOut, 1);
AudioControlSGTL5000 audioShield; //xy=71,97
// GUItool: end automatically generated code

void setup()
{
    AudioMemory(20);
    AudioNoInterrupts();
    audioShield.enable();
    audioShield.inputSelect(14);
    audioShield.lineInLevel(5);
    audioShield.lineOutLevel(10);
    audioShield.unmuteHeadphone();
    audioShield.adcHighPassFilterDisable();
    audioShield.volume(1.0);
    mixer1.gain(0, 0.5);
    mixer1.gain(1, 0.5);
    AudioInterrupts();

    pinMode(13, INPUT);
    pinMode(13, OUTPUT);
}

void loop()
{

    //reverb1.reverbTime(3.0);
}
