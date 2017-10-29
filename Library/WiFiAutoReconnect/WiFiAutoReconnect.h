/*
Headerfile for WiFiAutoReconnect.ino
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
