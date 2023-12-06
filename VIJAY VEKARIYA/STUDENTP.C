#include<stdio.h>
#include<conio.h>
void main()
{
   int p,c,m;
   int a;
   clrscr();
   printf("marks p:");
   scanf("%d",&p);
   printf("marks c:");
   scanf("%d",&c);
   printf("marks m:");
   scanf("%d",&m);
   printf("total marks=%d\n",p+c+m);
   printf("totsl marks obtaind=%d\n",(p+c+m)*100/300);
   a=(p+c+m)*100/300;
   if (a>33)
  { printf("student pass");
  }
  else
  { printf("student fail");
  }
  getch();
  }