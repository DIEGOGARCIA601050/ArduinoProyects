int Rojo = 11;
int Amarillo = 10;
int Verde = 9;

void setup() {
  pinMode(Rojo,OUTPUT);
  pinMode(Amarillo,OUTPUT);
  pinMode(Verde,OUTPUT);

}

void loop() {
  digitalWrite(Verde,HIGH);
  delay(20000);
  digitalWrite(Verde,LOW);
  delay(300);
  digitalWrite(Amarillo,HIGH);
  delay(3000);
  digitalWrite(Amarillo,LOW);
  delay(300);
  digitalWrite(Rojo,HIGH);
  delay(15000);
  digitalWrite(Rojo,LOW);
  delay(300);

}
