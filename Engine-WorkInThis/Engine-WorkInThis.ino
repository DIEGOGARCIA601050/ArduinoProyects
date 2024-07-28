const int motor = 3;
const int potenciometro = A0;

int valorPot/*Lectura señal analógica*/, velocidadMotor;
void setup() {
  pinMode(potenciometro,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorPot = analogRead(potenciometro);
  Serial.println(valorPot);
  velocidadMotor = map(valorPot, 0, 1023, 0, 255);
  analogWrite(motor,velocidadMotor);
  delay(500);
}
