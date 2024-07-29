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

void LetterA() {
  for(int i=2;i<9;i++){
    if(i!=5) {
      digitalWrite(i,HIGH);
      delay(500);
    }
  }
  for(int i=2;i<9;i++){
    if(i!=5) {
      digitalWrite(i,LOW);
      delay(500);
    }
  }
}
void Letterb() {
  for(int i=2;i<=8;i++){
    if(i!=5) {
      if(i!=6){
        
        digitalWrite(i,HIGH);
        delay(500);
      }
    }
  }
  for(int i=2;i<=8;i++){
    if(i!=5) {
      
      digitalWrite(i,LOW);
      delay(500);
    }
  }
}
void LetterE(){
    for(int i=2;i<9;i++){
      if(i!=6) {
        if(i!=7) {
          digitalWrite(i,HIGH);
          delay(500);
        }
      }
  }
  for(int i=2;i<9;i++){
    if(i!=6) {
      if(i!=7) {
        digitalWrite(i,LOW);
      delay(500);
      }
    }
  }
}
void LetterC(){
    for(int i=2;i<6;i++){
      digitalWrite(i,HIGH);
      delay(500);
    }
  for(int i=2;i<6;i++){
    digitalWrite(i,LOW);
    delay(500);
  }
}
void loop() {
  LetterA();
  Letterb();
  LetterE();
  LetterC();
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