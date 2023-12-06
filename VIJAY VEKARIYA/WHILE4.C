#include<stdio.h>
#include<conio.h>
void main()
{
   char i='A',j='A';
   clrscr();

   while(i<='E')
      {
	j='A';
	while(j<='E')
	   {
	    printf("%c ",i);
	    j++;
	   }
	    printf("\n");
	    i++;
      }
      getch();
}
