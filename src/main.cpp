#include <Arduino.h>

int contador = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

int antes = millis();
int estado = 0;

void loop() {
 int ahora = millis();
 if (ahora - antes > 1000){
  digitalWrite(LED_BUILTIN, estado);
  estado = !estado;
  antes = ahora;
 }

 Serial.println(contador++);
}

