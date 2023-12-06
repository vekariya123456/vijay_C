#include<stdio.h>
#include<conio.h>
void main()
{
   char i='A',j='A';
   clrscr();

   while(i<='E')
      {
	j='A';
	while(j<=i)
	  {
	   printf("%c ",j);
	   j++;
	  }
	   printf("\n");
	   i++;
       }
       getch();
}