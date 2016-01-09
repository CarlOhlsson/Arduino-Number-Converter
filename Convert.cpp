#include "Arduino.h"
#include "Convert.h"

Convert::Convert(){}

int Convert::binaryToDecimal(String value){
    float result = 0;
    int exponent = 0;
    int base = 2;

    for(int i = value.length(); i > 0; i--){
      int currentLocation = value.substring(i-1,i).toInt();
      if(currentLocation == 1){
        result += (currentLocation * pow(base, exponent));
      }
      exponent++;
    }
    return result + 0.5;
}


int Convert::hexaToDecimal(String value){
    float result = 0;
    int exponent = 0;
    int base = 2;

    for(int i = value.length(); i > 0; i--){
      int currentLocation = value.substring(i-1,i).toInt();
      if(currentLocation >= 0 || currentLocation <= 9){
        result += (currentLocation * pow(base, exponent));
      }
      exponent++;
    }
    return result + 0.5;

}

int Convert::octalToDecimal(String value){
  Serial.println("octalToDecimal");
  return 1;

}




String Convert::decimalToBinary(int value){
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

String Convert::decimalToHexa(int value){
  Serial.println("decimalToHexa");
  return "";

}

String Convert::decimalToOctal(int value){
  Serial.println("decimalToOctal");
  return "";

}