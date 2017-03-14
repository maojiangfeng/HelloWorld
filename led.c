#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(0,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
   
  
	
	while(1)
	{
        digitalWrite(0,LOW);//R
        digitalWrite(9,LOW);//G
        digitalWrite(2,HIGH);//2
        digitalWrite(3,HIGH);//3
        digitalWrite(7,HIGH);//B
		digitalWrite(8,LOW);//1
		delay(1000);
		digitalWrite(8,LOW);
		digitalWrite(9,HIGH);
		delay(1000);
		digitalWrite(8,HIGH);
		delay(1000);
		digitalWrite(2,LOW);
		digitalWrite(9,LOW);
		digitalWrite(7,HIGH);
		delay(1000);
		digitalWrite(2,HIGH);
        delay(1000);
		digitalWrite(3,LOW);
		digitalWrite(7,LOW);
		digitalWrite(0,HIGH);
		delay(1000);
		digitalWrite(3,HIGH);
		
		}
		
	return 0;
}
