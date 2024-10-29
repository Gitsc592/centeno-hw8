/////////////////////////////////////////
// Filename : myApp.cpp
// Editor : Sed Centeno
// Date : 10/31/2024
//
// Description:
// Same as "makeLEDs.cpp" found in the "makeLEDOOP" folder
// except that the class, function implementation, and main function
// has been split into their respective files.
//
// Arguments:
// on OR off OR flash OR status
//
// Example Invocation:
// ./myApp on
/////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "derek_LED.h"

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[]){
   if(argc!=2){
	   cout << "Usage is ./myApp <command>" << endl;
     cout << "   command is one of: on, off, flash or status" << endl;
	   cout << " e.g. ./myApp flash" << endl;
     return 2;
   }
   cout << "Starting the myApp program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the myApp program" << endl;
   return 0;
}
