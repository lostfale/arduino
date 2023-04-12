#include <TaskManagerIO.h>
int ledPins[] = {3, 5, 6, 9, 10, 11};
int ledStates[] = {LOW, LOW, LOW, LOW, LOW, LOW};
 
int numLedPins = 6;
 
void setup() {
 
  for (int i = 0; i < numLedPins; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[0] == LOW) {
      ledStates[0] = HIGH;
      digitalWrite(ledPins[0], HIGH); // Включаем светодиод
    }
    else {
      ledStates[0] = LOW;
      digitalWrite(ledPins[0], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[1] == LOW) {
      ledStates[1] = HIGH;
      digitalWrite(ledPins[1], HIGH); // Включаем светодиод
    }
    else {
      ledStates[1] = LOW;
      digitalWrite(ledPins[1], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[2] == LOW) {
      ledStates[2] = HIGH;
      digitalWrite(ledPins[2], HIGH); // Включаем светодиод
    }
    else {
      ledStates[2] = LOW;
      digitalWrite(ledPins[2], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[3] == LOW) {
      ledStates[3] = HIGH;
      digitalWrite(ledPins[3], HIGH); // Включаем светодиод
    }
    else {
      ledStates[3] = LOW;
      digitalWrite(ledPins[3], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[4] == LOW) {
      ledStates[4] = HIGH;
      digitalWrite(ledPins[4], HIGH); // Включаем светодиод
    }
    else {
      ledStates[4] = LOW;
      digitalWrite(ledPins[4], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(100, [] {
    if (ledStates[5] == LOW) {
      ledStates[5] = HIGH;
      digitalWrite(ledPins[5], HIGH); // Включаем светодиод
    }
    else {
      ledStates[5] = LOW;
      digitalWrite(ledPins[5], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);
}
 
void loop() {
 
  taskManager.runLoop();
}
