// Definimos los pines a los que están conectados los LEDs
int estado = 0;
int boton = 2;
int randomFunc = 0;
const int ledPins[] = {13,12,11,10,9}; // Pines para los LEDs
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]); // Número de LEDs
const int RandomSequence[] = {1,2,3};
void serial() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Encender LED
    delay(500); // Esperar medio segundo
    digitalWrite(ledPins[i], LOW); // Apagar LED
    delay(500);
  }
}
void serialReverse() {
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Encender LED
    delay(500); // Esperar medio segundo
    digitalWrite(ledPins[i], LOW); // Apagar LED
  }
}
void RandomFlashing() {
  for (int i = 0; i < 10; i++) {
    int randomLed = random(numLeds); // Elegir un LED aleatorio
    digitalWrite(ledPins[randomLed], HIGH); // Encender LED
    delay(200); // Esperar 200 ms
    digitalWrite(ledPins[randomLed], LOW); // Apagar LED
  }
}

void setup() {
  
  // Configuramos los pines como salidas
  Serial.begin(9600);
  pinMode(boton,INPUT);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

}

void loop() {
  estado=digitalRead(boton);
  if(estado==HIGH) {
    Serial.println("encendido");
    randomFunc = random(RandomSequence);
    switch(randomFunc){
      case 1:
        serial();
        break;
      case 2:
        serialReverse();
        break;
      case 3:
        RandomFlashing();
        break;
    }

  }
  if(estado==LOW) {
    Serial.println("apagado");
  }

  // Esperar 2 segundos antes de repetir el ciclo
  delay(1000);
}
