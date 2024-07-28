int pulsoCorto = 200;
int pulsoLargo = 600;

void setup() {
  // initialize digital pins 8 and LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(9,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  PulsarCorto(4);
  DelayMoments();
  PulsarLargo(3);
  DelayMoments();
  PulsarCorto(1);
  PulsarLargo(1);
  PulsarCorto(2);
  DelayMoments();
  PulsarCorto(1);
  PulsarLargo(1);
  DelayMoments();
  digitalWrite(9,HIGH);
}

void PulsarCorto(int veces) {
  for (int i = 0; i < veces; i++) {
    digitalWrite(8, HIGH);
    delay(pulsoCorto);
    digitalWrite(8, LOW);
    delay(pulsoCorto);
  }
}

void PulsarLargo(int veces) {
  for (int i = 0; i < veces; i++) {
    digitalWrite(8, HIGH);
    delay(pulsoLargo);
    digitalWrite(8, LOW);
    delay(pulsoLargo);
  }
}

void DelayMoments() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
}