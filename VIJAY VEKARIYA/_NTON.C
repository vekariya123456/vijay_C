#include<stdio.h>
#include<conio.h>
void main()
{   int a,n;
    clrscr();

    printf("enter n:");
    scanf("%d",&n);

    for(a=-n;a<=n;a++)
    {
    printf("A is%d\n",a);
    }
    getch();
}
