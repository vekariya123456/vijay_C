#include<stdio.h>
#include<conio.h>
void main()
{
   char i='A',j;
   clrscr();

   while(i<='E')
     {
      j=i;
      while(j>='A')
	 {
	  printf("%c ",j);
	  j--;
	 }
	 printf("\n");
	 i++;
     }
     getch();
}


