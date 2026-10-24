#include <Arduino.h>
#define LED_AZUL 8

#define AIN1 10
#define AIN2 7
#define BIN1 20
#define BIN2 21

const int freq = 20000;
const int resolution = 8;
int velocidad = 180;
void avanzar();
void retroceder();
void girarDerecha();

void girarIzqBACK();
void girarDerBACK();
void girarEnElLugarDerecha();
void girarEnElLugarIzquierda();
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
  avanzar();
  delay(1500);
  girarDerecha();
  delay(500);
  avanzar();
  delay(500);
  //digitalWrite(LED_AZUL, LOW);
  //delay(500);
  //digitalWrite(LED_AZUL, HIGH);
  //delay(1000);
  //digitalWrite(LED_AZUL, LOW);
  //delay(3000);
  //digitalWrite(LED_AZUL, HIGH);
  //delay(1500);
  
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
