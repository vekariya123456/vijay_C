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
     while(j<=5)
	{
	 printf("%d\t",A);
	 A++;
	 j++;
	}
	 printf("\n");
	 i++;
    }
    getch();
}