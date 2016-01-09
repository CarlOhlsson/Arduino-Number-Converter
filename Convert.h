
#ifndef Convert_h
#define Convert_h

#include "Arduino.h"

class Convert
{
  public:
    Convert();
    int binaryToDecimal(String value);
    int hexaToDecimal(String value);
    int octalToDecimal(String value);
    String decimalToBinary(int value);
    String decimalToHexa(int value);
    String decimalToOctal(int value);

};

#endif
