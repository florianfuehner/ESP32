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
