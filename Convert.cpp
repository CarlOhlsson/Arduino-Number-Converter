#include "Arduino.h"
#include "Convert.h"

Convert::Convert(){}

int Convert::binaryToDecimal(String value)
{
  long result = 0;
    int exponent = 0;
    for(int i = value.length(); i > 0; i--){
      int currentLocation = value.substring(i-1,i).toInt();
      if(currentLocation == 1){
        result = result + pow((currentLocation*2), exponent) +1;
      }
      exponent++;
    }
    result -= 1;
    return result;
}

String Convert::decimalToBinary(int value)
{
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
