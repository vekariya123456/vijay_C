#include<stdio.h>
#include<conio.h>
void main()
{
   int  a[10];
   int i,sum=0;
   clrscr();

   for(i=0;i<10;i++)
    {
     printf("enter value[%d]:",i);
     scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
     sum +=a[i];
    }

    printf("sum %d\n",sum);
   getch();
}

