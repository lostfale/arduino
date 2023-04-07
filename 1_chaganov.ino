

const int ledPin1 = 3;  // белая
const int ledPin2 = 5;  // синия
const int ledPin3 = 6;
const int ledPin4 = 9;
const int ledPin5 = 10;
const int ledPin6 = 11;


int ledState1 = LOW;  
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;



unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;

const long interval1 = 30;
const long interval2 = 400;
const long interval3 = 5000;
const long interval4 = 10000;
const long interval5 = 40000;
const long interval6 = 100000;  

void setup() {
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
 
  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis1 >= interval1) {
   
    previousMillis1 = currentMillis;

  
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

   
    digitalWrite(ledPin1, ledState1);
  }

  if (currentMillis - previousMillis2 >= interval2) {
   
    previousMillis2 = currentMillis;

    
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

   
    digitalWrite(ledPin2, ledState2);
  }
  
    if (currentMillis - previousMillis3 >= interval3) {
    
    previousMillis3 = currentMillis;

    
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }

   
    digitalWrite(ledPin3, ledState3);
  }

  if (currentMillis - previousMillis4 >= interval4) {
    
    previousMillis4 = currentMillis;

   
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }

    
    digitalWrite(ledPin4, ledState4);
  }

  if (currentMillis - previousMillis5 >= interval5) {
   
    previousMillis5 = currentMillis;

   
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }

:
    digitalWrite(ledPin5, ledState5);
  }

  if (currentMillis - previousMillis6 >= interval6) {
    
    previousMillis6 = currentMillis;

    
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }

    
    digitalWrite(ledPin6, ledState6);
  }
}
