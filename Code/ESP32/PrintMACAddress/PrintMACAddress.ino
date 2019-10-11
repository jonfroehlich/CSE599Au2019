/*
 * Prints MAC address of ESP32
 * 
 * By Liang He and Jon Froehlich
 * http://makeabilitylab.io
 * 
 */
#include <WiFi.h>
 
void setup(){
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);

  Serial.print("Device MAC address:");
  Serial.println(WiFi.macAddress());
}

void loop(){
  // Intentionally blank
}
