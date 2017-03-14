#include <stdio.h>
#include <wiringPi.h>

int main()

{
   wiringPiSetup();
   pinMode(8,OUTPUT);
   digitalWrite(8,LOW);
   softPwmCreate(9,0,100);
   softPwmCreate(7,0,100);
   softPwmCreate(0,0,100);
   while(1)
   {
   softPwmWrite(9,10);
   softPwmWrite(7,2);
   softPwmWrite(0,89);
   delay(1000);
   softPwmWrite(9,44);
   softPwmWrite(7,200);
   softPwmWrite(0,187);
   delay(1000);
     
   }
   return 0;
   }
