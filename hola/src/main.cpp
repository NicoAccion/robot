#include <Arduino.h>
#define LED_AZUL 8

#define AIN1 3
#define AIN2 4
#define BIN1 5
#define BIN2 6

const int freq = 20000;
const int resolution = 8;
int velocidad = 180;
// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_AZUL, OUTPUT);

  ledcAttach(AIN1, freq, resolution);
  ledcAttach(AIN2, freq, resolution);
  ledcAttach(BIN1, freq, resolution);
  ledcAttach(BIN2, freq, resolution);
}

void loop() {
  digitalWrite(LED_AZUL, LOW);
  delay(500);
  digitalWrite(LED_AZUL, HIGH);
  delay(1000);
  digitalWrite(LED_AZUL, LOW);
  delay(3000);
  digitalWrite(LED_AZUL, HIGH);
  delay(1500);
  
}

// put function definitions here:
void avanzar(){
  // Motor izquierdo
  ledcWrite(AIN1, velocidad);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, velocidad);
  ledcWrite(BIN2, 0);
}

void retroceder(){
  // Motor izquierdo
  ledcWrite(AIN1, 0);
  ledcWrite(AIN2, velocidad);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, velocidad);
}

void girarIzquierda(){
  // Motor izquierdo
  ledcWrite(AIN1, 0);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, velocidad);
  ledcWrite(BIN2, 0);
}

void girarIzqBACK(){
  // Motor izquierdo
  ledcWrite(AIN1, 0);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, velocidad);
}

void girarDerecha(){
  // Motor izquierdo
  ledcWrite(AIN1, velocidad);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, 0);
}

void girarDerBACK(){
  // Motor izquierdo
  ledcWrite(AIN1, 0);
  ledcWrite(AIN2, velocidad);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, 0);
}

void girarDerecha(){
  // Motor izquierdo
  ledcWrite(AIN1, velocidad);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, 0);
}

void girarEnElLugarDerecha(){
  // Motor izquierdo
  ledcWrite(AIN1, velocidad);
  ledcWrite(AIN2, 0);

  //Motor derecho
  ledcWrite(BIN1, 0);
  ledcWrite(BIN2, velocidad);
}

void girarEnElLugarIzquierda(){
  // Motor izquierdo
  ledcWrite(AIN1, 0);
  ledcWrite(AIN2, velocidad);

  //Motor derecho
  ledcWrite(BIN1, velocidad);
  ledcWrite(BIN2, 0);
}
