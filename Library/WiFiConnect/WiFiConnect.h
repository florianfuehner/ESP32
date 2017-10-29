/*
Headerfile for WiFiConnect.ino
*/

#ifndef WiFiConnect_h
#define WiFiConnect_h

#include <Arduino.h>
#include <WiFiConnect.ino>
#include <WiFi.h>
#include <WiFiServer.h>

class WiFiConnection {
	private:
		int connectTry;
		const char* _ssid;
		const char* _password;
	public:
		WiFiServer server;
		void WiFiConnect() { };
};

#endif
