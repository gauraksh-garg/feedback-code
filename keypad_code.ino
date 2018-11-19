
#include <Keypad.h>
#include <LiquidCrystal.h>

const int rs = 14, en = 15, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {10, 11, 12, 13};        //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9};        //connect to the column pinouts of the keypad

 //initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
   for(int k=8;k<14;k++)

  {
    pinMode(k,OUTPUT);          //pins 8-14 are enabled as output
  }

  lcd.begin(16, 2);      //initializing LCD
    lcd.setCursor(0, 1);

  lcd.clear();
  
}
void loop(){
  
  char customKey = customKeypad.getKey();
  lcd.clear();
  lcd.setCursor(0, 1);
 
  if (customKey=='1'){ 
    Serial.println(customKey);
      lcd.print(customKey);
    lcd.print(" VERY BAD ");
    Serial.print(" VERY BAD \n");
    
  delay(5000);
  }if (customKey=='2'){
    Serial.println(customKey);
    lcd.print(" BAD ");
    Serial.print(" BAD \n");
    lcd.print(customKey);
   
  delay(5000);
    
  }if (customKey=='3'){
    Serial.println(customKey);
    Serial.print(" NEEDS IMPROVEMENT \n");
    lcd.print(customKey);
    lcd.print(" NEEDS IMPROVEMENT ");
    lcd.print(millis() / 1000);
  delay(5000);
  }if (customKey=='4'){
    Serial.println(customKey);
    lcd.print(" GOOD ");
    lcd.print(customKey);
    Serial.print(" GOOD \n");
  }if (customKey=='5'){
    Serial.println(customKey);
    lcd.print(customKey);
    Serial.print(" EXCELLENT \n");
    lcd.print(" EXCELLENT ");
    
  delay(5000);
  }if (customKey=='6'){
    Serial.println(customKey);
    Serial.print(" CALL THE WAITER \n");
    lcd.print(customKey);
    lcd.print(" CALL THE WAITER ");
    
  delay(5000);
  }if (customKey=='7'){
    Serial.println(customKey);
    Serial.print(" BRING WATER \n");
    lcd.print(customKey);
    lcd.print(" BRING WATER ");
   
  delay(5000);
  }if (customKey=='8'){
    Serial.println(customKey);
    Serial.print(" TOO SPICY \n");
    lcd.print(customKey);
    lcd.print(" TOO SPICY ");
    
  delay(5000);
  }if (customKey=='9'){
    Serial.println(customKey);
    Serial.print(" NEEDS SALT \n");
    lcd.print(customKey);
    lcd.print(" NEEDS SALT ");
   
  delay(5000);
  }if (customKey=='0'){
    Serial.println(customKey);
    Serial.print(" COLD FOOD \n");
    lcd.print(customKey);
    lcd.print(" COLD FOOD ");
    
  delay(5000);
  }if (customKey=='A'){
    Serial.println(customKey);
    Serial.print(" GOOD SERVICE \n");
    lcd.print(customKey);
    lcd.print(" GOOD SERVICE ");
    
  delay(5000);
  }if (customKey=='B'){
    Serial.println(customKey);
    Serial.print(" WELL COOKED \n");
    lcd.print(customKey);
    lcd.print(" WELL COOKED ");
   
  delay(5000);
  }if (customKey=='C'){
    Serial.println(customKey);
    Serial.print(" ORDER DELAYED \n");
    lcd.print(customKey);
    lcd.print(" ORDER DELAYED ");
    
  delay(5000);
  }if (customKey=='D'){
    Serial.println(customKey);
    Serial.print(" SATISFACTORY \n");
    lcd.print(customKey);
    lcd.print(" SATISFACTORY ");
   
  delay(5000);
  }if (customKey=='*'){
    Serial.println(customKey);
    Serial.print(" BRING THE BILL \n");
    lcd.print(customKey);
    lcd.print(" BRING THE BILL ");
    
  delay(5000);
  }
  if (customKey=='#'){
    Serial.println(customKey);
    Serial.print(" BRING SWEET DISH \n");
    lcd.print(customKey);
    lcd.print(" BRING SWEET DISH ");
   
  delay(5000);
  }
  }
