
#ifndef Convert_h
#define Convert_h

#include "Arduino.h"

class Convert
{
  public:
    Convert();
    long binaryToDecimal(String value);
    long hexaToDecimal(String value);
    long octalToDecimal(String value);
    String decimalToBinary(long value);
    String decimalToHexa(long value);
    String decimalToOctal(long value);

};

#endif
