#include <SAMD21DeviceID.h>
#include <Arduino.h>

#define DEBUG
SAMD21::SAMD21() {
}

/**
 */
void SAMD21::getSerialNumber(char* out) {
  char buf[33];
  volatile uint32_t val1, val2, val3, val4;
  volatile uint32_t *ptr1 = (volatile uint32_t *)0x0080A00C;
  val1 = *ptr1;
  volatile uint32_t *ptr = (volatile uint32_t *)0x0080A040;
  val2 = *ptr;
  ptr++;
  val3 = *ptr;
  ptr++;
  val4 = *ptr;
  sprintf(buf, "%8x%8x%8x%8x", val1, val2, val3, val4);

#ifdef DEBUG
  Serial.print("SAMD21 serialnumber: 0x");
  Serial.println(buf);
#endif
  
  // very bad, i know, next i'll try i < sizeof(buf)
  for(int i=0; i < 33; ++i){
    out[i] = buf[i];
  }
}
