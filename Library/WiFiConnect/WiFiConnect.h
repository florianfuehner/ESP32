/*
Headerfile for WiFiConnect.ino
For further documention for the functions have a look at the comments of the .ino file. 

The variables declared as private are not reachable from your program. 
The variables declared as public are reachable from your program. 
*/

#ifndef WiFiConnect_h
#define WiFiConnect_h

#include <Arduino.h>
#include <WiFiConnect.ino> // included as link to the function. 
#include <WiFi.h>
#include <WiFiServer.h>

class WiFiConnection {
	private:
		int connectTry;
		const char* _ssid;
		const char* _password;
	public:
		WiFiServer server; // creates the instance server of WiFiServer
		void WiFiConnect() { }; //Prototype of function
};

#endif
