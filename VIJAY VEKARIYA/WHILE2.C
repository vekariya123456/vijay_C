#include<stdio.h>
#include<conio.h>
int main()
{
  int i=5,j=5;
  clrscr();

  while(i>=1)
     {
       j=5;
       while(j>=1)
	{
	 printf("%d ",i);
	 j--;
	}
	printf("\n");
	i--;
      }
      getch();
}