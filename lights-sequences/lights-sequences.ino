int button = 2;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int estado = 0;
int sequence = 0;

void Sequence(int temp) {
  for(int i =13;i>=9;i--) {
        digitalWrite(i,HIGH);
        delay(temp);
        digitalWrite(i,LOW);
      }
}

void setup() {
  pinMode(button,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  estado = digitalRead(button);
  if(estado==1){
    sequence+=1;
  }
  switch (sequence) {
    case 1:
      Serial.println("0");
      for(int i = 13;i>=9;i--){
        digitalWrite(i,HIGH);
      }
      delay(1000);
      for(int i = 13;i>=9;i--){
        digitalWrite(i,LOW);
      }
      delay(1000);
      break;
    case 2:
      Serial.println("1");
      Sequence(200);
      break;
    case 3:
      Serial.println("2");
      Sequence(100);
      break;
    case 4:
      Serial.println("3");
      Sequence(500);
      break;
    default:
      Serial.println("4");
      sequence = 0;
  }
  if(sequence>=4){
    sequence=0;
  }
}
