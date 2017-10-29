/*
Headerfile for  WiFiAutoReconnect.ino
For further documention of the functions have a look at the comments of the .ino file. 
The variables declared as private are not reachable from your program. 
The variables declared as public are reachable from your program. 
*/

#ifndef WiFiAutoReconnect_h
#define WiFiAutoReconnect_h

#include <Arduino.h>
#include <WiFiAutoReconnect.ino>
#include <WiFi.h>

class WiFiAutoReconnecter {
	private:
		const char* _ssid;
		const char* _password;
	public:
		void WiFiAutoReconnect() { };
};

#endif
