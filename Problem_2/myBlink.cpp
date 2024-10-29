/////////////////////////////////////////
// Filename : myBlink.cpp
// Editor : Sed Centeno
// Date : 10/31/2024
//
// Description:
// Same as "makeLEDs.cpp" found in the "makeLEDOOP" folder
// except that the class, function implementation, and main function
// has been split into their respective files.
//
// New functionality has been implemented to accept a new argument N.
// which is used to specify a single LED to perform the action on.
// A new function called "blink" has also been implemented which will
// turn the specified LED on/off at a rate of 0.5 Hz. This function will
// take an additional argument for the amount of times to blink.
//
// Arguments:
// (on OR off OR flash OR status OR blink) N (LED #) N (# Times to Blink, only
// if arg is "blink")
//
// Example Invocation:
// ./myBlink on 2
// ./myBlink blink 2 3
/////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "derek_LED.h"

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[]){
   if(argc < 3){
	   cout << "Usage is ./myBlink <command>" << endl;
     cout << "   command is one of: on, off, flash or status or blink" << endl;
	   cout << " e.g. ./myBlink flash 3" << endl;
     return 2;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   int LEDN = stoi(argv[2]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
      if(cmd=="on")leds[LEDN].turnOn();
      else if(cmd=="off")leds[LEDN].turnOff();
      else if(cmd=="flash")leds[LEDN].flash("100"); //default is "50"
      else if(cmd=="status")leds[LEDN].outputState();
      else if(cmd=="blink"){
        if (argc < 4){
          cout << "Please supply the amount of times to blink." << endl;
          cout << "e.g. ./myBlink blink 2 3" << endl;
          return 2;
        }

        int BlinkN = stoi(argv[3]);
        leds[LEDN].blink(BlinkN);
      }
      else{ cout << "Invalid command!" << endl; }
   cout << "Finished the myBlink program" << endl;
   return 0;
}
