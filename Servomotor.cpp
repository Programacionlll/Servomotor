//Beatriz Quijada 61851282
#include <Servo.h>

Servo s1;
int pos = 0;



void setup()
{
  s1.attach(9,500,2500);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void encender(){
  digitalWrite(13, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  
}
void angulo(){
  int ang = s1.read();
  Serial.println(ang);
}

void loop()
{
  for(pos = 0;pos<=180; pos++)
  {
  s1.write(pos);
  encender();
  delay(100);
  angulo();
  }
  for(pos = 0;pos<=180; pos--)
  {
  s1.write(pos);
  encender();
  delay(100);
  angulo();
  }
}  
