#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j=1;
  clrscr();

  while(i<=9)
    {
     j=1;
     while(j<=5)
	{
	 printf("%d\t",i);
	 j++;
	}
	 printf("\n");
	 i+=2;
    }
    getch();

}