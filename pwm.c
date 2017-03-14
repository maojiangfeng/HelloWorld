#include <stdio.h>
#include <wiringPi.h>

int main()
{
   wiringPiSetup();
   pinMode(8,OUTPUT);
   pinMode(0,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(9,OUTPUT);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(7,LOW);
   digitalWrite(0,LOW);
   int time=0;
   int i;
   while(1)
   {
	   time+=10;
	   for(i=0;i<10;i++)
	   {
		   digitalWrite(8,HIGH);
		   delay(time);
		   digitalWrite(8,LOW);
		   delay(100-time);
		   if(time>=100)
		   time=0;
	   }
   
   }
   return 0;
   }
