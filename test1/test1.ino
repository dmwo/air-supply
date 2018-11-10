#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

//LPF Coefficients
const short LPF_Coeffs[10] = {
    (short)(32768 * 0.00437),
    (short)(32768 * 0.03210),
    (short)(32768 * 0.08633),
    (short)(32768 * 0.15176),
    (short)(32768 * 0.19727),
    (short)(32768 * 0.19727),
    (short)(32768 * 0.15176),
    (short)(32768 * 0.08633),
    (short)(32768 * 0.03210),
    (short)(32768 * 0.00437)};

// GUItool: begin automatically generated code
AudioInputI2S Linein1;        //xy=82,36
AudioSynthWaveformSine sine1; //xy=82,136
AudioMixer4 mixer1;           //xy=378,57
AudioFilterFIR LPF;           //xy=548,56
AudioOutputI2S LineOut1;      //xy=759,53
AudioConnection patchCord1(Linein1, 0, mixer1, 0);
AudioConnection patchCord2(sine1, 0, mixer1, 1);
AudioConnection patchCord3(mixer1, LPF);
AudioConnection patchCord4(LPF, 0, LineOut1, 0);
AudioConnection patchCord5(LPF, 0, LineOut1, 1);
AudioControlSGTL5000 audioShield; //xy=82,229
// GUItool: end automatically generated code

void setup()
{
    AudioNoInterrupts();
    audioShield.enable();
    audioShield.inputSelect(AUDIO_INPUT_LINEIN);
    audioShield.lineInLevel(5);
    audioShield.unmuteHeadphone();
    audioShield.volume(1.0);
    LPF.begin(LPF_Coeffs, 10);
    AudioInterrupts();
}

void loop()
{
    
}
