
// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String lecturas;

void setup() {
  lcd.begin(16, 2);
  lcd.print(" T  |  H  |  C  ");
  randomSeed(23);
  Serial.begin(9600);

}

void loop() {

  int temp = random(10, 45);
  //de 18 a 40
  int humedad = random(30, 70);
  // 40 a 60

  int corriente = random(50);


//  Serial.print("temperatura: ");
//  Serial.print(temp);
//
//
//  Serial.print("humedad: ");
//  Serial.print(humedad);
//
//
//  Serial.print("picos de corriente");
//  Serial.println(corriente);

  lecturas = (String)temp + "c | " + (String)humedad + "% | " + (String)corriente + "A";


//  Serial.println(lecturas);
//  Serial.println("------------------------------");

  delay(500);


  lcd.setCursor(0, 1);
  lcd.print(lecturas);

  
}
