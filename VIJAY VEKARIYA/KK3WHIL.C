#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,j=1;
   int a,b,c;
   clrscr();

   while(i<=5)
      {
       j=1;
       while(j<=i)
	 {
	  printf(" *");
	  j++;
	 }
	 printf("\n");
	 i++;
      }
      a=5;
      while(a>=1)
	 {
	  c=5;
	  while(c>a)
	    {
	     printf("  ");
	     c--;
	    }

	  b=1;
	  while(b<=a)
	     {
	      printf(" +");
	      b++;
	     }
	     printf("\n");
	     a--;
	 }
	 getch();
}






