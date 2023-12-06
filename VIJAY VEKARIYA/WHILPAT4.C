#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,j=1;
   int A=1;
   clrscr();

   while(i<=5)
      {
	j=1;
	while(j<=i)
	  {
	   printf("%d ",A);
	   A++;
	   j++;
	  }
	   printf("\n");
	   i++;
       }
       getch();
}