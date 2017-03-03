
// include the library code:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String lecturas;
String alerta;

void setup() {
  randomSeed(23);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print(" T  |  H  |  C  ");

}

void loop() {

  int temp = random(17, 41);
  //de 18 a 40
  int humedad = random(35, 65);
  // 40 a 60

  int corriente = random(50);




  Serial.print("temperatura: ");
  Serial.print(temp);


  Serial.print("     humedad: ");
  Serial.print(humedad);


  Serial.print("     picos de corriente");
  Serial.println(corriente);



  //  Serial.println(lecturas);
  //  Serial.println("------------------------------");

  if (18 < temp || temp > 40)
  {

    Serial.println("añlskdalksdñlaksdlñaksdñlas");

    lcd.begin(16, 2);
    lcd.print("!! Temperatura!!");

    alerta = "!!!!!  " + (String)temp + "c  !!!!!";

    lcd.setCursor(0, 1);
    lcd.print(alerta);
    delay(500);
    delay(500);

    lcd.clear();

  }
  else if (40 < humedad || humedad > 60)
  {

    Serial.println("añlskdalksdñlaksdlñaksdñlas");

    lcd.begin(16, 2);
    lcd.print("!!!humedad!!!");

    alerta = "!!!!!  " + (String)humedad + "%  !!!!!";

    lcd.setCursor(0, 1);
    lcd.print(alerta);
    delay(500);
    delay(500);
    lcd.clear();

  }

  else if (50 < corriente)
  {

    Serial.println("añlskdalksdñlaksdlñaksdñlas");

    lcd.begin(16, 2);
    lcd.print("!!!!Corriente!!!");

    alerta = "!!!!!  " + (String)corriente + "c  !!!!!";

    lcd.setCursor(0, 1);
    lcd.print(alerta);
    delay(500);
    delay(500);

    lcd.clear();

  }


  lcd.clear();
  lecturas = (String)temp + "c | " + (String)humedad + "% | " + (String)corriente + "A";
  lcd.setCursor(0, 1);
  lcd.print(lecturas);





  delay(500);



}}
