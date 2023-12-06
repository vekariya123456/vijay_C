#include<stdio.h>
#include<conio.h>
void main()
{  int i=1,j=1,k;
   int a,b,c;
   clrscr();

   while(i<=5)
       {
	k=5;
	while(k>=i)
	 {
	  printf(" ");
	  k--;
	 }
	 j=1;
	 while(j<=i)
	   {
	    printf("* ");
	    j++;
	   }
	   printf("\n");
	   i++;
      }
	 a=5;
	 while(a>=1)
	 {
	    c=a;
	    while(c<=5)
	      {
		printf(" ");
		c++;
	      }
	  b=1;
	  while(b<=a)
	   {
	    printf("+ ");
	    b++;
	   }
	   printf("\n");
	   a--;
	 }
	 getch();
}