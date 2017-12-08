#include <ESP8266WiFi.h>

void setup() {

  Serial.begin(115200);
  delay(10);

  WiFi.mode(WIFI_STA);
  delay(500);

  WiFi.beginSmartConfig();

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if(WiFi.smartConfigDone()){
      Serial.println("WiFi Smart Config Done.");
    }
  }

  Serial.println("");
  Serial.println("");

  WiFi.printDiag(Serial);


}

void loop() {
  yield();
}
