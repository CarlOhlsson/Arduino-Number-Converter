
#ifndef Convert_h
#define Convert_h

#include "Arduino.h"

class Convert
{
  public:
    Convert();
    int binaryToDecimal(String value);
    String decimalToBinary(int value);
};

#endif
