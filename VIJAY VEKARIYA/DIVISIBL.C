#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("enter a value:");
    scanf("%d",&a);
    if (a%5==0,a%3==0)
    {
    printf("a divisible 5 and 3");
    }
    else
    {
    printf("a not divisible by 5 and 3");
    }
    getch();
    }