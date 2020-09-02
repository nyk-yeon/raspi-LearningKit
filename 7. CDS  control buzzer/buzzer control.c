// Need i2C Enable

#include <wiringPi.h>
#include <pcf8591.h>
#include <stdio.h>

#define	LED         15
#define Q2W_ABASE   120


void voice_freq(int del)
{
  digitalWrite(15,HIGH);
  delay(del);
  digitalWrite(15,LOW);
  delay(del);
}

int main(void)
{
    
  int value;
 
  wiringPiSetup();
  pcf8591Setup(Q2W_ABASE,0x48);
  pinMode(15,OUTPUT);
  digitalWrite(15,LOW);

  while(1)
  {
    value = analogRead(Q2W_ABASE + 0);

    if (value<80)
      voice_freq(value);
  }

  return 0;
}
