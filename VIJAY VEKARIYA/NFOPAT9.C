#include<stdio.h>
#include<conio.h>
void main()
{
    char c='A';
    int i,j;
    clrscr();

    for(i=1;i<=5;i++)

       { for(j=1;j<=i;j++)

	 {
	  printf("%c\t",c++);
	 }
	 printf("\n");
       }
       getch();
}



