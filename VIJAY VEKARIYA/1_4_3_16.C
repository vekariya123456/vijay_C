#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n;
    clrscr();

    printf("enter n=:");
    scanf("%d",&n);

    for(a=0;a<=n;a++)

   if(a%2==1)
   {
    printf("%d\t",a);
   }
   else

   {printf("%d\t",a*a);
   }
    getch();
   }




