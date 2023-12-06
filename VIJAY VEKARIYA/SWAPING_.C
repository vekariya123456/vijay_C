#include<stdio.h>
#include<conio.h>
void main()
{     int a,b,c;
      clrscr();
      printf("enter value of a=");
      scanf("%d",&a);

      printf("enter value b=");
      scanf("%d",&b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("ans of a:%d\n",a);
     printf("ans of b:%d",b);
     getch();

}