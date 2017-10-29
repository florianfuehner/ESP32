/*
Library WiFiAutoReconnect.ino
Developed and published by Florian Fühner. 
Licence: open and free. 
Description of functions: 
  void WiFiAutoReonnect(const char* _ssid, const char* _password):
        const char* _ssid: get the WiFi SSID
        const char* _password: get the Password of the WiFi
    the funktion monitors the connection to the WiFi. 
    it reconnects the WiFi automatically if the connection is lost. 
    it starts the function WiFiConnect(). 
    for further documentation of WiFiConnect() have a look to its library. 
    call the function WiFiAutoReconnect() from the void loop() of your program. 
*/

#include <WiFiConnect.h>
#include <WiFi.h>
#include <WiFiAutoReconnect.h>

void WiFiAutoReonnect(const char* _ssid, const char* _password)
{
	if (WiFi.isConnected() == 0)
	{
		Serial.println();
		Serial.println("WiFi connection lost. Reconnecting ... ");
		Serial.println();
		WiFiConnect(_ssid, _password);
	}
}
