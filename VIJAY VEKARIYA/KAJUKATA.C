#include<stdio.h>
#include<conio.h>
void main()
{  int i,j,k;
   int a,b,c;
   clrscr();

   for(i=1;i<=5;i++)
      {


	 for(j=1;j<=i;j++)
	   {
	    printf(" *");
	   }
	    printf("\n");
       }

   for (a=5;a>=1;a--)
	{
	    for(c=a;c<5;c++)
	    {
	     printf("  ");
	    }
	    for(b=1;b<=a;b++)
	    {
	     printf(" +");
	    }
	    printf("\n");

	}
	getch();
}

