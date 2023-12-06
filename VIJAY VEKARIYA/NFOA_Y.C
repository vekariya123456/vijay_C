#include<stdio.h>
#include<conio.h>
void main()
{

    char a='A';
    int i,j;
    clrscr();

    for(i=1;i<=5;i++)

       {  for(j=1;j<=5;j++)
	   {
	    printf("%c\t",a++);
	   }
	   printf("\n");
       }
       getch();
}