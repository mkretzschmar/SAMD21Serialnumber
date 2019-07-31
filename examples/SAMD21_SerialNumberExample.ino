#include <SAMD21DeviceID.h>

SAMD21 samd = SAMD21();
char serialnumber[33];

void setup() {
  Serial.begin(9600);
  delay(1000);
  samd.getSerialNumber(serialnumber);
  delay(1000);
  Serial.print("[SETUP] chip serial#: 0x");
  Serial.println(serialnumber);
}

void loop() {
  delay(1000);
  Serial.println(serialnumber);
}
