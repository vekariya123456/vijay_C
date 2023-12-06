#include<stdio.h>
#include<conio.h>
void main()
{
  float a=0.5;
  float n,b;
  clrscr();

  printf("enter n");
  scanf("%f",&n);

  printf("%f",a);

  for(b=0.5;b<=n;b++)
  {
  printf("%f\t",a+=b*1);
  }
  getch();
  }



