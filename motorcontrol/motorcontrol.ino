dchar a[20];
char b;
int i=0;
int c=0;
int led=13;
int motorA1=8;
int motorA2=9;
int motorB1=10;
int motorB2=11;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(motorA1,HIGH);
  pinMode(motorA2,HIGH);
  pinMode(motorB1,HIGH);
  pinMode(motorB2,HIGH);
}
void loop()
{
  while(Serial.available() >0)
  {
    b=Serial.read();
    a[i]=b;
    i++;
  }
    while(a[0]=='f')
    {
      digitalWrite(motorA1, HIGH);
      digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, HIGH);
      digitalWrite(motorB2, LOW);
    }
    while(a[0]=='b')
    {
      digitalWrite(motorA1, LOW);
      digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, LOW);
      digitalWrite(motorB2, HIGH);
    }
    while(a[0]=='l')
    {
      digitalWrite(motorA1, LOW);
      digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, HIGH);
      digitalWrite(motorB2, LOW);
    }
    while(a[0]=='r')
    {
      digitalWrite(led, HIGH);
      digitalWrite(motorA1, HIGH);
      digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW);
      digitalWrite(motorB2, HIGH);
    }
  i=0;
}
