#include<stdio.h>
#include<conio.h>
void main()
{
  int a[6]={2,4,6,1,3,5};
  int i,oddsum=0,evensum=0;
  clrscr();

    for(i=0;i<6;i++)

     { if(a[i]%2==0)
	{
	 evensum=evensum+a[i];
	}
       else
	{
	 oddsum=oddsum+a[i];
	}
     }
     printf("the evensum is:%d\n",evensum);
     printf("the oddsum is:%d",oddsum);
     getch();
}