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
     while(j<=5)
	{
	 printf("%c\t",c);
	 c++;
	 j++;
	}
	 printf("\n");
	 i++;
    }
    getch();
}