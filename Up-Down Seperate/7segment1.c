#include<reg52.h>
void delay(int ms)
{
int i,j;
for(i=0; i<=ms; i++)
for(j=0; j<=1200; j++);
}

void main()
{
while(1)
{
int i,j=9;
char a[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
for(i=0;i<10;i++)
{
P2=a[i];
P3=a[j];
j--;
delay(100);
}
}
}