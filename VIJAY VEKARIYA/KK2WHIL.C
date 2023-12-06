#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,j=1,k=5;
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
	getch();
}





