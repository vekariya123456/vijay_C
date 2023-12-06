#include<stdio.h>
#include<conio.h>
void main()
{  int  x,y;
   clrscr();

   printf("enter x:");
   scanf("%d",&x);
   printf("enter y:");
   scanf("%d",&y);

   if(x<2000 || x>3000)
   {  printf("value print of x %d\n",x);
   }
   if (y>100 && y<500)
   {printf("value print y %d\n",y);
   }
   getch();
   }


