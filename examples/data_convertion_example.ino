#include <Convert.h>

//Creation of class object
Convert convert;

void setup() {
  Serial.begin(9600);
  int dec = 50;
  //Conversion de decimal a binario
  Serial.print("50 converted to binary: ");
  Serial.println(convert.decimalToBinary(dec));
  //Conversion de decimal a hexadecimal
  Serial.print("50 converted to hexadecimal: ");
  Serial.println(convert.decimalToHexa(dec));
  //Conversion de decimal a octal
  Serial.print("50 converted to octal: ");
  Serial.println(convert.decimalToOctal(dec));

  String hex = "aabbab";
  //Conversion from hexadecimal to decimal
  Serial.print("AABBAB converted to decimal: ");
  Serial.println(convert.hexaToDecimal(hex));


  String bin = "11001111";
  //Conversion from binary to decimal
  Serial.print("11001111 converted to decimal: ");
  Serial.println(convert.binaryToDecimal(bin));

  String oct = "515";
  //Conversion from octal to decimal
  Serial.print("515 converted to decimal: ");
  Serial.println(convert.octalToDecimal(oct));
}

void loop() {
  //do nothing
}
