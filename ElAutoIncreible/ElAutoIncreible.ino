int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;
int LEDs[] = {5,6,7,8,9};

int temp = 200;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);

}

void loop() {
  TurnOfOnLED(led5);//9
  TurnOfOnLED(led4);//8
  TurnOfOnLED(led3);//7
  TurnOfOnLED(led2);//6
  TurnOfOnLED(led1);//5
  TurnOfOnLED(led1);
  TurnOfOnLED(led2);
  TurnOfOnLED(led3);
  TurnOfOnLED(led4);
  TurnOfOnLED(led5);
  for(int i = 9;i>=5;i--) {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  for(int i=5;i<=9;i++) {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  for(int i = 0;i<10;i++) {
    int randomLED = random(LEDs);
    digitalWrite(randomLED,HIGH);
    delay(500);
  }
}

void TurnOfOnLED (int led) {
  digitalWrite(led,HIGH);
  
  delay(temp);

  digitalWrite(led,LOW);

  delay(temp);
}