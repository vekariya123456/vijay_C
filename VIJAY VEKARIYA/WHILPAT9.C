#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,j=1;
   char c='A';
   clrscr();

   while(i<=5)
      {
	j=1;
	while(j<=i)
	  {
	   printf("%c ",c);
	   c++;
	   j++;
	  }
	   printf("\n");
	   i++;
       }
       getch();
}