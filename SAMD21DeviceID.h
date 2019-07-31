#ifndef SAMD21_h
#define SAMD21_h

// Simple class that provides Methods for accessing the
// SAMD21 128bit serial number
class SAMD21 {
 public:
   SAMD21(); // initialize without params
   void getSerialNumber(char* out); // returns the unique DeviceID 
 private:
};
#endif
