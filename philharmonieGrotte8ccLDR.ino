//Arduino MEGA 2560 8 analogin>>Midi 
//Mars 2019 A.Sacha SAKHAROV

#include <MIDI.h>
//penser à installer midi Library 4.3
MIDI_CREATE_DEFAULT_INSTANCE();





int lastldr0;
int lastldr1;
int lastldr2;
int lastldr3;

int lastldr4;
int lastldr5;
int lastldr6;
int lastldr7;



void setup() {
 
MIDI.begin(1);          // Lancer MIDI et écouter sur channel 1
       
        MIDI.sendNoteOn(42,127,1);  // envoyer une note (pitch 42, velo 127 on channel 1)
                    // attendre 10ms
        delay(10);
        MIDI.sendNoteOff(42,0,1);
        delay(10);
}

void loop() {

int ldr0 = analogRead(A0)/8;
int ldr1 = analogRead(A1)/8;
int ldr2 = analogRead(A2)/8;
int ldr3 = analogRead(A3)/8;
int ldr4 = analogRead(A4)/8;
int ldr5 = analogRead(A5)/8;
int ldr6 = analogRead(A6)/8;
int ldr7 = analogRead(A7)/8;

int seuil = 1; //seuil de variation à partir duquel les CC sont envoyés



if ((ldr0-lastldr0) > seuil || (ldr0-lastldr0) < -(seuil)) {
      
MIDI.sendControlChange(30,ldr0,1);
delay(1);
     
lastldr0 = ldr0;        }



if ((ldr1-lastldr1) > seuil || (ldr1-lastldr1) < -(seuil)) {
      
MIDI.sendControlChange(31,ldr1,1);
delay(1);
     
lastldr1 = ldr1;        }



if ((ldr2-lastldr2) > seuil || (ldr2-lastldr2) < -(seuil)) {
      
MIDI.sendControlChange(32,ldr2,1);
delay(1);
     
lastldr2 = ldr2;        }



if ((ldr3-lastldr3) > seuil || (ldr3-lastldr3) < -(seuil)) {
      
MIDI.sendControlChange(33,ldr3,1);
delay(1);
     
lastldr3 = ldr3;        }



if ((ldr4-lastldr4) > seuil || (ldr4-lastldr4) < -(seuil)) {
      
MIDI.sendControlChange(34,ldr4,1);
delay(1);
     
lastldr4 = ldr4;        }



if ((ldr5-lastldr5) > seuil || (ldr5-lastldr5) < -(seuil)) {
      
MIDI.sendControlChange(35,ldr5,1);
delay(1);
     
lastldr5 = ldr5;        }



if ((ldr6-lastldr6) > seuil || (ldr6-lastldr6) < -(seuil)) {
      
MIDI.sendControlChange(36,ldr6,1);
delay(1);
     
lastldr6 = ldr6;        }



if ((ldr7-lastldr7) > seuil || (ldr7-lastldr7) < -(seuil)) {
      
MIDI.sendControlChange(37,ldr7,1);
delay(1);
     
lastldr7 = ldr7;        }



  

}
