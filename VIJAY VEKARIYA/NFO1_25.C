#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1,i,j;
    clrscr();

    for(i=1;i<=5;i++)

      { for(j=1;j<=5;j++)

	{
	 printf("%d\t",a++);
	}
	printf("\n");
     }
     getch();

}