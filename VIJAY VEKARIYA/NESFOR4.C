#include<stdio.h>
#include<conio.h>
void main()
{
  char i,j;
  clrscr();

  for(i='A';i<='E';i++)
     {
       for(j='A';j<='E';j++)
       {
	 printf("%c\t",i);
       }
	printf("\n");
     }
     getch();
}