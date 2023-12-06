#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c;
      clrscr();
      printf("enter A:");
      scanf("%d",&a);

      printf("enter B:");
      scanf("%d",&b);

      printf("enter c:");
      scanf("%d",&c);

      if (a>b)
      {
       if(a>c)
       { printf("%d is largest",a);
       }
       else
       {printf("%d is largest",c);
       }
      }
else
      {
       if(b>c)
       { printf("%d is largest",b);
       }
       else
       {printf("%d is largest",c);
       }
       }

       getch();
       }