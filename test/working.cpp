#include "Arduino.h"
#include "esp_camera.h"

// Definir el pin del LED del ESP32-CAM
#define LED_PIN 4

// Intervalo de encendido y apagado (en milisegundos)
int intervaloEncendido = 2000;  // 2 segundos encendido
int intervaloApagado = 1000;    // 1 segundo apagado

void setup() {
  // Configurar el pin del LED como salida
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(LED_PIN, HIGH);
  delay(intervaloEncendido);  // Esperar durante el intervalo encendido

  // Apagar el LED
  digitalWrite(LED_PIN, LOW);
  delay(intervaloApagado);  // Esperar durante el intervalo apagado
}
