# SAMD21Serialnumber

Library providing a function to read out the 128 bit unique serialnumber of a SAMD21 chip, e.g. Adafruit Feather M0.

For details take a look to

https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/Atmel-42181-SAM-D21_Datasheet.pdf

(9.3.3, page 32) Each device has a unique 128-bit serial number which is a concatenation of four 32-bit words contained at the following addresses:
    Word 0: 0x0080A00C
    Word 1: 0x0080A040
    Word 2: 0x0080A044
    Word 3: 0x0080A048
    The uniqueness of the serial number is guaranteed only when using all 128 bits.
