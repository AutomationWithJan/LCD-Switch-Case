#include <LiquidCrystal.h>      //Inkluderer LCD bibliotek
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;//Her endrer du pinnene for LCDskjerm
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);    //Initialisere LCD koblingspunkt




void setup() {
  // put your setup code here, to run once:
LCD.begin(16, 2);     //definere hvilken skjerm vi har. 
LCD.clear();          //Tømme displayet for tegn som standard
}

void loop() {
  // put your main code here, to run repeatedly:
 LCD.setCursor(0,0); //Her velger du hvor du skal skrive teksten
 LCD.print("HEI");//Her skriver du ut din tekst
}
