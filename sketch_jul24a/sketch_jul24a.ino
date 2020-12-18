#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "yLNz6Zyhl1oIEoz5dwb2llyKVfbF4tpc";
char ssid[] = "Hensem";
char pass[] = "hensembet";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
