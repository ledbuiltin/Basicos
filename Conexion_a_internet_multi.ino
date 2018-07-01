#include <ESP8266WiFi.h>        // Include the Wi-Fi library
#include <ESP8266WiFiMulti.h>   // Include the Wi-Fi-Multi library

ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'

void setup() {
  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
  delay(10);
  Serial.println('\n');

  wifiMulti.addAP("OSK-4904", "4bd0e75f");   // add Wi-Fi networks you want to connect to
  wifiMulti.addAP("UPC628450", "LXLKQLIA");
 // wifiMulti.addAP("ssid_from_AP_3", "ggffgdhgfdhgf");

  Serial.println("Connecting ...");
  //Ponemos puntitos mientras se conecta
  int i = 0;
  while (wifiMulti.run() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
    delay(250);
    Serial.print('.');
  }
  Serial.println('\n');
  Serial.print("Connected to ");
  Serial.println(WiFi.SSID());              // Tell us what network we're connected to
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());           // Send the IP address of the ESP8266 to the computer
  Serial.print("MAC: ");          
  Serial.println(WiFi.macAddress());        //Send the MAC of the ESP8266 to the PC
}

void loop() { }
