#include<stdio.h>
#include<conio.h>
void main()
{
   char i,j;
   clrscr();

   for(i='A';i<='E';i++)

     { for(j=i;j>='A';j--)
       {
	printf("%c\t",j);
       }
       printf("\n");
     }
     getch();
}