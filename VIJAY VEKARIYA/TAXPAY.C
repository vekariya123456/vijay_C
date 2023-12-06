


#include<stdio.h>
#include<conio.h>
void main()
{   int tax,income;
    clrscr();

    printf("enter income:");
    scanf("%d",&income);

    if(income>=0 && income<=2500)
    {
      tax=0;
    }
    else if(income>=2500 && income<=5000)
    {
     tax=0+(income-2500)*0.10;
    }
    else if(income>=5000 && income<=10000)
    {
      tax=250+(income-5000)*0.20;
    }
    else if(income>=10000)
    {
     tax=250+1000+(income-10000)*0.30;
    }
    printf("net pay tax %d",tax);

   getch();


}