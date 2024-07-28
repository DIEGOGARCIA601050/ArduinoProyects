int rojo = 9;

int verde = 10;
int azul = 11;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  for(int i = 8;i<=11;i++){
    digitalWrite(i,LOW);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,HIGH);
    delay(1000);
  }
  digitalWrite(rojo,LOW);
  digitalWrite(verde,HIGH);
  digitalWrite(azul,HIGH);
  delay(1000);
  digitalWrite(rojo,HIGH);
  digitalWrite(verde,LOW);
  digitalWrite(azul,HIGH);
  delay(1000);
  digitalWrite(rojo,HIGH);
  digitalWrite(verde,HIGH);
  digitalWrite(azul,LOW);
  delay(1000);
  digitalWrite(rojo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(azul,LOW);
  delay(1000);
  digitalWrite(rojo,HIGH);
  digitalWrite(verde,HIGH);
  digitalWrite(azul,HIGH);
  delay(1000);
}
