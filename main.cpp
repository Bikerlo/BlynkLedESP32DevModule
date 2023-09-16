#include <Arduino.h>

// Pin al que está conectado el LED
const int ledPin = 2; 

void setup() {
  // Inicializa el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); 

  // Apaga el LED
  digitalWrite(ledPin, LOW);
  delay(1000); 
}