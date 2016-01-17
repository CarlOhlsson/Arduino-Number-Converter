#include "Arduino.h"
#include "Convert.h"

Convert::Convert(){}

/**
  1: Convert the string into char array
  2: Use char array with cpp strtol and base

  Reference: http://www.cplusplus.com/reference/cstdlib/strtol/
*/
long Convert::binaryToDecimal(String value){
    int base = 2; 
    int length = value.length() +1;
    char valueAsArray[length];
    value.toCharArray(valueAsArray, length);
    
    return strtol(valueAsArray, NULL, base);
}

/**
  1: Convert the string into char array
  2: Use char array with cpp strtol and base

  Reference: http://www.cplusplus.com/reference/cstdlib/strtol/
*/
long Convert::hexaToDecimal(String value){
    int base = 16;
    int length = value.length() +1;
    char valueAsArray[length];
    value.toCharArray(valueAsArray, length);
    return strtol(valueAsArray, NULL, base);
}

/**
  1: Convert the string into char array
  2: Use char array with cpp strtol and base

  Reference: http://www.cplusplus.com/reference/cstdlib/strtol/
*/
long Convert::octalToDecimal(String value){
    int base = 8;
    int length = value.length() +1;
    char valueAsArray[length];
    value.toCharArray(valueAsArray, length);
    return strtol(valueAsArray, NULL, base);
}

/**
  Using the divide by 2 and remainder method to create a binary string

  Reference: http://www.wikihow.com/Convert-from-Decimal-to-Binary
*/
String Convert::decimalToBinary(long value){
  String result = "";
  if(value == 0){
    return "0";
  }else{
    while(value > 0){
      if((value % 2) == 0){
        result = "0" + result;
      }else{
        result = "1" + result;
      }
      value /= 2;
    }
  }
  return result;
}


/**
  1: Convert the decimal value into a binary String
  2: Each 4 bit pattern is translated into hexadecimal

  Reference: http://www.rapidtables.com/convert/number/how-binary-to-hex.htm
*/
String Convert::decimalToHexa(long value){
  String valueAsBinary = decimalToBinary(value);
  String valueAsHexa = "";
  String tmp = "";

  // Loop over the binary list from right to left
  for(int i = valueAsBinary.length() ; i > 0; i--){
    if(tmp.length() == 4){
      valueAsHexa = fourBitsToHex(tmp) + valueAsHexa;
      tmp = "";
    }
    tmp = valueAsBinary.substring(i, i-1) + tmp;
  }

  valueAsHexa = fourBitsToHex(tmp) + valueAsHexa;
  return valueAsHexa;
}

/**
  1: Convert the decimal value into a binary String
  2: Each 3 bit pattern is translated into octal

  Reference: http://www.wikihow.com/Convert-Binary-to-Octal-Number
*/
String Convert::decimalToOctal(long value){
  String valueAsBinary = decimalToBinary(value);
  String valueAsOctal = "";
  String tmp = "";

  // Loop over the binary list from right to left
  for(int i = valueAsBinary.length() ; i > 0; i--){
    if(tmp.length() == 3){
      valueAsOctal = String(binaryToDecimal(tmp)) + valueAsOctal;
      tmp = "";
    }
    tmp = valueAsBinary.substring(i, i-1) + tmp;
  }

  valueAsOctal = String(binaryToDecimal(tmp)) + valueAsOctal;
  return valueAsOctal;

}

/**
  This method will translate a 4 bit binary value into the correct hexadecimal didgit
*/
String Convert::fourBitsToHex(String value){
  int decValue = binaryToDecimal(value);
  switch(decValue){
    case 10:
      return "A";
    break;
    case 11:
      return "B";
    break;
    case 12:
      return "C";
    break;
    case 13:
      return "D";
    break;
    case 14:
      return "E";
    break;
    case 15:
      return "F";
    break;
    default:
      return String(decValue);
    break;
  }
}
