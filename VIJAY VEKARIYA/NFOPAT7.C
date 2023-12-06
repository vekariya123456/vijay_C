#include<stdio.h>
#include<conio.h>
void main()
{
 char c='A';
 int i,j;
 clrscr();

  for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)

    {
      if(i%2==0)
      {
       printf("%c ",c+32);
      }
      else
      {
       printf("%c ",c);
      }
      c++;
    }
      printf("\n");

  }
  getch();
 }

