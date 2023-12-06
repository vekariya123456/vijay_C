#include<stdio.h>
#include<conio.h>
void main()
{  int p,c,m,marks;
   clrscr();
   printf("enter p,c,m:");
   scanf("%d %d %d",&p,&c,&m);


   printf("total marks %d\n",p+c+m);

   marks=(p+c+m)*100/300;

   printf("total pr: %d\n",(p+c+m)*100/300);


   if (marks>=75)
   { printf("grade a");
   }
   else if(marks>=60 && marks<=75)

   { printf("grad b");
   }
   else if (marks>=45 && marks<=60)
    {printf("grade c");
    }
   else if (marks>=35 && marks<=45)
    {printf("grade d");
    }
  else
    {printf("fail");
    }
   getch();
}