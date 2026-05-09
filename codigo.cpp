#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// DEFINIÇÕES DO LCD
#define ENDERECO 0x27  // Verifique se é 0x27 ou 0x3F
#define COLUNAS 20
#define LINHAS 4

// DEFINIÇÕES DO SENSOR
const int pinADC = A0;
const float V_REF = 3.3; // Altere para 5.0 se estiver usando Arduino Uno/Nano

LiquidCrystal_I2C lcd(ENDERECO, COLUNAS, LINHAS);

void setup() {
  Serial.begin(115200);
  
  // Inicialização do LCD
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("Monitor de Tensao");
  delay(2000);
  lcd.clear();
}

void loop() {
  // 1. Leitura do valor bruto (ADC)
  int valorADC = analogRead(pinADC);
  
  // 2. Conversão para Voltagem
  // Cálculo: (Valor lido * Voltagem de Referência) / Resolução do ADC (10 bits = 1023)
  float tensao = (valorADC * V_REF) / 1023.0;

  // 3. Exibição no Serial (Monitor)
  Serial.print("ADC: ");
  Serial.print(valorADC);
  Serial.print(" | Voltagem: ");
  Serial.println(voltagem);

  // 4. Exibição no LCD
  lcd.setCursor(0, 0);
  lcd.print("ADC Bruto: ");
  lcd.print(valorADC);
  lcd.print("     "); // Espaços para limpar resíduos de números maiores

  lcd.setCursor(0, 1);
  lcd.print("Tensao:  ");
  lcd.print(tensao);
  lcd.print(" V  ");

  // Opcional: Manter a linha de Metros se ainda for útil
  float metros = 0.0119 * voltagem - 0.2449;
  lcd.setCursor(0, 2);
  lcd.print("Nivel:     ");
  lcd.print(metros);
  lcd.print(" m  ");

  delay(500); // Atualização a cada 500ms para leitura fluida
}
