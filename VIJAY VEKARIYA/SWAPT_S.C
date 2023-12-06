#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    clrscr();
    printf("enter value of a = ");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
       printf("ans a:%d\n",a);
       printf("ans b:%d",b);
       getch();






}