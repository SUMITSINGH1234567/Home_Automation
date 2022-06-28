int m1a=2;
int m1b=4;
int m2a=7;
int m2b=8;
int led1=13;
int led2=12;
int led3=3;
char val;
void setup() {
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
  {
    val=Serial.read();
    Serial.println(val);
  }
  if(val=='1')//everything is off
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='2')//everything is on
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if(val=='3')//bedroom light on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='4')//diningroom light on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if(val=='5')//bedroom fan on
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='6')//diningroom fan on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='7')//bedroom fan and bedroom light on
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  
  if(val=='8')//dinningroom fan and diningroom light on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if(val=='9')//bedroom fan and dinningroom lights on
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if(val=='a')//bedroom light and dinningroom fan on 
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='b')//bedroom fan and dinningroom fan on
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(val=='c')//bedroom light and dinningroom ligth on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if(val=='d')//bedroom,dinningroom,other ligths on
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  
}
