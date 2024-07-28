const int boton = 2;
int valor = 0;
const int LED = 8;

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
  pinMode(LED,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  valor = digitalRead(boton);
  if (valor == HIGH) {
    digitalWrite(LED,HIGH);
    digitalWrite(LED_BUILTIN,LOW);
    delay(1000);
  }
  if(valor==LOW){
    digitalWrite(LED,LOW);
    digitalWrite(LED_BUILTIN,HIGH);
  }
  delay(100); // Reduce el tiempo de espera para una respuesta más rápida
}
