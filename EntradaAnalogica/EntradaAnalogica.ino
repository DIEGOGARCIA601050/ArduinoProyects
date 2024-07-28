int valorUno,valorDos, valorTres = 0;
int azul = 3;
int rojo =6;
int verde =5;
int potenciometro1 = A0;
int potenciometro2 =A1;
int potenciometro3 = A2;

void setup() {
  Serial.begin(9600);
  pinMode(azul,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(potenciometro1,INPUT);
  pinMode(potenciometro2,INPUT);
  pinMode(potenciometro3,INPUT);

}

void loop() {
  valorUno = analogRead(A0)/4;
  analogWrite(rojo,valorUno);
  valorDos = analogRead(A1)/4;
  analogWrite(verde,valorDos);
  valorTres = analogRead(A2)/4;
  analogWrite(azul,valorTres);
  Serial.print("Rojo: ");
  Serial.println(valorUno);
  Serial.print("Verde 2: ");
  Serial.println(valorDos);
  Serial.print("Azul analógico 3: ");
  Serial.println(valorTres);
  delay(1000);

}
