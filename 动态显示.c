#include<reg51.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
uchar code tab[]={0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80};
void delay(uint t)
{
  int i,j;
  for(i=0;j<t;i++)
  for(j=0;j<120;j++);
}
void main()
{
  uchar m;
  uint k;
  m=0x80;
  P0=0xff;
  P2=0x00;
  while(1)
{
  for(k=0;k<8;k++)
{
  m=_crol_(m,1);
  P2=m;
  P0=tab[k];
  delay(100);
 
}
}
 
}

