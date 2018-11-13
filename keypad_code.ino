/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include<Keypad.h>
  
const byte ROWS = 4; /* four rows */
const byte COLS = 4; /* four columns */
/* define the symbols on the buttons of the keypads */
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {10, 11, 12, 13}; /* connect to the row pinouts of the keypad */
byte colPins[COLS] = {6, 7, 8, 9}; /* connect to the column pinouts of the keypad */

/* initialize an instance of class NewKeypad */
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
Serial.begin(9600);
}
void loop() {
  int adc_val;
  adc_val = analogRead(A1); /* Read input from keypad */
  if (adc_val>850)
  {
    Serial.print("Key Pressed : ");
    Serial.println("0");
    delay(100);
  }
  else if ( adc_val>450  && adc_val<510)
  {
    Serial.print("Key Pressed : ");
    Serial.println("1");
    delay(100);
  }
  else if ( adc_val>300  && adc_val<350)
  {
    Serial.print("Key Pressed : ");
    Serial.println("2");
    delay(100);
  }
  else if ( adc_val>230  && adc_val<270)
  {
    Serial.print("Key Pressed : ");
    Serial.println("3");
    delay(100);
  }
  else if ( adc_val>160  && adc_val<180)
  {
    Serial.print("Key Pressed : ");
    Serial.println("4");
    delay(100);
  }
  else if ( adc_val>145  && adc_val<155)
  {
    Serial.print("Key Pressed : ");
    Serial.println("5");
    delay(100);
  }
  else if ( adc_val>125  && adc_val<135)
  {
    Serial.print("Key Pressed : ");
    Serial.println("6");
    delay(100);
  }
  else if ( adc_val>105  && adc_val<120)
  {
    Serial.print("Key Pressed : ");
    Serial.println("7");
    delay(100);
  }
  else if ( adc_val>92  && adc_val<99)
  {
    Serial.print("Key Pressed : ");
    Serial.println("8");
    delay(100);
  }
  else if ( adc_val>82  && adc_val<90)
  {
    Serial.print("Key Pressed : ");
    Serial.println("9");
    delay(100);
  }
  else if ( adc_val>77  && adc_val<81)
  {
    Serial.print("Key Pressed : ");
    Serial.println("A");
    delay(100);
  }
  else if ( adc_val>72  && adc_val<76)
  {
    Serial.print("Key Pressed : ");
    Serial.println("B");
    delay(100);
  }
  else if ( adc_val>63  && adc_val<68)
  {
    Serial.print("Key Pressed : ");
    Serial.println("C");
    delay(100);
  }
  else if ( adc_val>60  && adc_val<62)
  {
    Serial.print("Key Pressed : ");
    Serial.println("D");
    delay(100);
  }
  else if ( adc_val>57  && adc_val<59)
  {
    Serial.print("Key Pressed : ");
    Serial.println("E");
    delay(100);
  }
  else if( adc_val>52  && adc_val<56)
  {
    Serial.print("Key Pressed : ");
    Serial.println("F");
    delay(100);
  }
  else
  {
    
  }
  delay(100);
}
