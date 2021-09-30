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

void delay(int a)
{
int i,j;
for(i=0;i<a;i++)
for(j=0;j<100;j++);
}

void character()
{
while(1)
{
int i,k;
char b[]={0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF};

Lcd8_Cmd(0x40);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x0C);
Lcd8_Write_Char(0x0C);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Cmd(0xC0);
Lcd8_Write_Char(0);
for(k=0;k<16;k++)
{
Lcd8_Cmd(b[k]);
Lcd8_Write_Char(0);
}
delay(200);

Lcd8_Cmd(0x60);
Lcd8_Write_Char(0x0E);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x15);
Lcd8_Write_Char(0x15);
Lcd8_Write_Char(0x15);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x0A);
Lcd8_Write_Char(0x00);
Lcd8_Cmd(0xCF);
Lcd8_Write_Char(4);
delay(200); 	

Lcd8_Cmd(0x48);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x0F);
Lcd8_Write_Char(0x1E);
Lcd8_Write_Char(0x1C);
Lcd8_Write_Char(0x1C);
Lcd8_Write_Char(0x1E);
Lcd8_Write_Char(0x0F);
Lcd8_Write_Char(0x00);
Lcd8_Cmd(0xC0);
Lcd8_Write_Char(1);
delay(200);	

Lcd8_Cmd(0x50);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x0E);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x1F);
Lcd8_Write_Char(0x0E);
Lcd8_Write_Char(0x00);
Lcd8_Cmd(0xC0);
Lcd8_Write_Char(2);
delay(200);	 

Lcd8_Cmd(0x58);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Write_Char(0x00);
Lcd8_Cmd(0xC0);
Lcd8_Write_Char(3);
delay(200); 

Lcd8_Cmd(0xC0);
Lcd8_Write_Char(3);
delay(200);

for(k=0;k<16;k++)
{
for(i=0;i<4;i++)
{
Lcd8_Cmd(b[k]);
Lcd8_Write_Char(i);
delay(200);
}
}	
}
}

void main()
{
Lcd8_Init();
character();
}
