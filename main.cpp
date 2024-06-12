// inclusão das bibliotecas
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <MPU6050_tockn.h>
#include <DHT.h>

// inicializando o LCD
LiquidCrystal_I2C lcd(0x27, 20, 4); 
MPU6050 mpu6050(Wire);

// definição dos sensores
#define DHTPIN 8 
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// inicialização do código
void setup() {
  lcd.init(); 
  lcd.backlight();
  Serial.begin(9600);

  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("Inicializando...");
  delay(2000);
}

void loop() {
  // leitura do DHT22
  float temperature = dht.readTemperature();

  // leitura do sensor MPU6050
  mpu6050.update();

  // exibição no LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: ");
  lcd.print(temperature);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("AX: ");
  lcd.print(mpu6050.getAccX());

  lcd.setCursor(0, 2);
  lcd.print("AY: ");
  lcd.print(mpu6050.getAccY());

  lcd.setCursor(0, 3);
  lcd.print("AZ: ");
  lcd.print(mpu6050.getAccZ());

  lcd.setCursor(10, 1);
  lcd.print("GX: ");
  lcd.print(mpu6050.getGyroX());

  lcd.setCursor(10, 2);
  lcd.print("GY: ");
  lcd.print(mpu6050.getGyroY());

  lcd.setCursor(10, 3);
  lcd.print("GZ: ");
  lcd.print(mpu6050.getGyroZ());

  delay(2000);
}
