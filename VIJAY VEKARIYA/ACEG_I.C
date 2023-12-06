#include<stdio.h>
#include<conio.h>
void main()
{   int a;
    clrscr();

    for(a=65;a<=90;a+=2)
  { if(a%4==1)
    {printf("%c\t",a);
    }
    else
    {
    printf("%c\t",a+32);
    }
   }
   getch();


}
