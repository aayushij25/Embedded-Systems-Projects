#include<reg52.h>
sbit sw=P1^0;
sbit led=P2^0;
sbit led1=P2^1;
sbit led2=P2^2;
sbit led3=P2^3;
void Delay(int a)
{
int j;
int i;
for(i=0;i<a;i++)
{
for(j=0;j<100;j++)
{}
}
}
void main()
{
sw=1;
while(1)
{
if(sw==0)
{
led=1;
led1=1;
led2=1;
led3=1;
Delay(100);
}
else
{
led=0;
led1=0;
led2=0;
led3=0;
Delay(100);
}
}
}