#include <ESP8266WiFi.h> // Include the Wi-Fi library

const char* ssid = "OSK-4904";          // The SSID (name) of the Wi-Fi network you want to connect to
const char* password = "4bd0e75f";  // The password of the Wi-Fi network


void setup() {
  Serial.begin(115200); // Start the Serial communication to send messages to the computer
  delay(10);
  Serial.println('\n');
  WiFi.begin(ssid, password); // Connect to the network
  Serial.print("Connecting to ");
  Serial.print(ssid); Serial.println(" ...");

  //Contamos mientras se conecta cada 250 ms
  int i = 0;
  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect
  delay(500);
  Serial.print(++i); Serial.print(' ');
}
Serial.println('\n');
Serial.println("Connection established!");
Serial.print("IP address:\t");
Serial.println(WiFi.localIP()); // Send the IP address of the ESP8266 to the computer

Serial.print("MAC: ");          //Send the MAC of the ESP8266 to the PC
Serial.println(WiFi.macAddress());
}
void loop() { }

