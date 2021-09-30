#include<reg52.h>
#include<lcd.h>
sbit RS=P1^0;
sbit EN=P1^1;
sbit D0=P2^0;
sbit D1=P2^1;
sbit D2=P2^2;
sbit D3=P2^3;
sbit D4=P2^4;
sbit D5=P2^5;
sbit D6=P2^6;
sbit D7=P2^7;
sbit sw=P3^0;

void Delay(int a)
{
int i,j;
for(i=0;i<a;i++)
for(j=0;j<100;j++);
}

void main()
{
int i,x,z;
Lcd8_Init();
while(1)
{
while(sw==0)
{		
if(x==0)
{
Lcd8_Cmd(0x01);
Lcd8_Cmd(0x82);
Lcd8_Write_String("R-Labs");
x=1;
}
else
{
Lcd8_Cmd(0x82);
Lcd8_Write_String("R-Labs");
x=1;
}
}
Lcd8_Cmd(0x01);
Lcd8_Cmd(0x82);
Lcd8_Write_String("Not Pressed");
x=0;
Lcd8_Delay();
Lcd8_Cmd(0x82);
Lcd8_Write_String("Not Pressed");
x=0;   
}
}									 	