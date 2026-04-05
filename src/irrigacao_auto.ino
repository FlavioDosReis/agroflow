// C++ code
//
#include <Adafruit_LiquidCrystal.h>  // biblioteca do LCD

int umi = 0;  // declaração da variável 
 
Adafruit_LiquidCrystal lcd_1(0);  // declaração LCD

void setup() {
  pinMode(A0, INPUT);  // sensor de umidade, entrada de dados
  pinMode(2, OUTPUT);  // motor, saida de dados
  lcd_1.begin(16, 2);  // tamanho do LCD
  Serial.begin(9600);  // dar inicio a comunicação
  
}

void loop() {
  umi = (analogRead(A0) % 100);  // fazer a leitura do sensor analógico A0
  Serial.println(umi);        // mostrar no LCD a umidade do solo
   if (umi < 20) {                // se umidade menor que 40
         digitalWrite(2, HIGH);      // ligar o motor de irrigação
  } else {                        // se não
    digitalWrite(2, LOW);        // desligar motor de irigação
  }
 
  lcd_1.setCursor(0, 0);             // iniciar o LCD sem informação
  lcd_1.print("Umidade do solo:");    // linha 1, escrever "Umidade do solo:" 
  lcd_1.setCursor(7, 1);           // coluna 7, linha 2 
  lcd_1.print(umi);               // escrever a umidade na coluna 7, linha
  lcd_1.setCursor(9, 1);         // coluna 9, linha 2 
  lcd_1.print("%");            // escrever "%" na coluna 9, linha 2
  delay(100);           // esperar 1 segundo e recomeçar o código novamente
  
 }