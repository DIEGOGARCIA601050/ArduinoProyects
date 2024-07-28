int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  for(int i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
  for(int i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    delay(100);
  }
  for(int i=2;i<=9;i++){
    digitalWrite(i,LOW);
    delay(100);
  }
}