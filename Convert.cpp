#include "Arduino.h"
#include "Convert.h"

Convert::Convert(){}

long Convert::binaryToDecimal(String value){
    int base = 2;
    int length = value.length() +1;
    char testBuff[length];
    value.toCharArray(testBuff, length);
    return strtol(testBuff, NULL, base);
}


long Convert::hexaToDecimal(String value){
    int base = 16;
    int length = value.length() +1;
    char testBuff[length];
    value.toCharArray(testBuff, length);
    return strtol(testBuff, NULL, base);
}

long Convert::octalToDecimal(String value){
    int base = 8;
    int length = value.length() +1;
    char testBuff[length];
    value.toCharArray(testBuff, length);
    return strtol(testBuff, NULL, base);
}




String Convert::decimalToBinary(long value){
  String result = "";
  if(value == 0){
    return "0";
  }
  while(value > 0){
    if((value % 2) == 0){
      result = "0" + result;
    }else{
      result = "1" + result;
    }
    value /= 2;
  }
  return result;
}

String Convert::decimalToHexa(long value){
  Serial.println("decimalToOctal");
  return valueAsHexadecimal;
}

String Convert::decimalToOctal(long value){
  Serial.println("decimalToOctal");
  return "";

}