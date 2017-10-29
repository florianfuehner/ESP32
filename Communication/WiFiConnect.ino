/*
Library WiFiConnect.ino

Developed and published by Florian Fühner. 
Licence: open and free. 

Description of functions: 

  void WiFiConnect(const char* _ssid, const char* _password):
        const char* _ssid: pulls the WiFi SSID
        const char* _password: pulls the Password of the WiFi
    the funktion itself connects to the ESP 32 automatically to the 
    it waits until the device is connected to the WiFi
    and if the WiFi is disabled, the function restarts the process of connection frequently
    until the device is connected. 
    The Status is printed to the Serial Monitor. 
    Call this Function in the Setup() part of your program. 
*/

#include <WiFi.h>
#include <WiFiConnect.h>

WiFiServer server(80); // define port to listen on (here 80)

void WiFiConnect(const char* _ssid, const char* _password)
{
	Serial.println(); Serial.println();
    Serial.print("Connecting to ");
    Serial.println(_ssid);

    WiFi.begin(_ssid, _password); // Connect to WiFi

	// Visualisation of connecting WiFi
	int connectTry = 0;
    while (WiFi.status() != WL_CONNECTED) { 
        delay(500); Serial.print(".");
		delay(500); Serial.print(".");
		connectTry++;
		if (connectTry > 15) // timeout in seconds, maximum time for connection
		{
			connectTry = 0;
			WiFi.disconnect();
			Serial.println();
			Serial.println("Trying to connect "); 
			delay(100);

			WiFi.begin(_ssid, _password); //next try
		}
    }

    Serial.println();
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
	Serial.println();

	server.begin(); // start listening on port
}


