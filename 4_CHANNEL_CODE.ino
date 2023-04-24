/*New Blynk app with Home Automation
   https://srituhobby.com
*/

//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Define the relay pins
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3

#define BLYNK_AUTH_TOKEN "j0KVJ3NGHvy_ra_rqcoAxX1rjSwqkqiU" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "PLUTO";//Enter your WIFI name
char pass[] = "selvajee0.";//Enter your WIFI password

//Get the button values
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value1 == 1) {
    digitalWrite(relay1, LOW);
  } else {
    digitalWrite(relay1, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay2, LOW);
  } else {
    digitalWrite(relay2, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value3 = param.asInt();
  // Check these values and turn the relay3 ON and OFF
  if (value3 == 1) {
    digitalWrite(relay3, LOW);
  } else {
    digitalWrite(relay3, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V3) {
  bool value4 = param.asInt();
  // Check these values and turn the relay4 ON and OFF
  if (value4 == 1) {
    digitalWrite(relay4, LOW);
  } else {
    digitalWrite(relay4, HIGH);
  }
}

void setup() {
  //Set the relay pins as output pins
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Turn OFF the relay
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
