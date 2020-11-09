#include <LiquidCrystal.h>      //Inkluderer LCD bibliotek
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;//Her endrer du pinnene for LCDskjerm
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);    //Initialisere LCD koblingspunkt


int tall = 1;

void setup() {
  // put your setup code here, to run once:
LCD.begin(16, 2);     //definere hvilken skjerm vi har. 
LCD.clear();          //Tømme displayet for tegn som standard
}

void loop() {
  // put your main code here, to run repeatedly:
  
switch(tall){           //Switch case. Her kan vi kjøre flere scenarioer i koden vår
  case 1: 
  //Her kommer den første casen
  LCD.clear();      //Tømmer displayet for tegn
  LCD.setCursor(0, 0);      //Starter å skrive tegn på plassering 0 og linje 1
  
  LCD.print("Dette er case 1");   //teksten som skal skrives ut
  break;    //break tvinger arduino ut av casen slik at restena av koden kan kjøre

  case 2: //Her er case nummer 2
  LCD.clear();      //tømmer LCD skjermen for tegn
  LCD.setCursor(0, 1);  //Velger tegn 0(Helt til venstre) og linje nr2
  LCD.print("Dette er case 2");   //teksten som printes ut
  break;              //break tvinger arduino ut av casen slik at restena av koden kan kjøre

  case 3:
  LCD.clear();      //Tømmer LCD skjerm for tegn
  LCD.setCursor(0, 0);    //velger tegn 0 og linje 1
  LCD.print("Dette er case 3");   //teksten som printes ut
  break;        //break tvinger arduino ut av casen slik at restena av koden kan kjøre
}
tall = tall + 1 ;     //Endre på tall slik at vi kan kjøre en annen case
delay(1000);          //setter et delay på 1000 millisekund
if (tall ==4){        //resetter variabelen tall til switch casen
  tall = 1;           // Grunnen til resett er at vi ikke har flere caser.
}
}
