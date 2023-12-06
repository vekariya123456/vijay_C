#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[5], sci[5] ,Math[5], guj[5], total[5], per[5];
    int i;
    char grade[5];
    clrscr();

    for(i=0; i<5; i++)
   {
     printf("\n\n Enter %d student marks---->\n", i+1);
     printf("Enter Math mark: ");
     scanf("%d",&mat[i]);
     printf("Enter sci marks: ");
     scanf("%d",&sci[i]);
     printf("Enter guj mark: ");
     scanf("%d",&guj[i]);
     total[i]=mat[i]+sci[i]+guj[i];
     per[i]=(total[i])*100/300;
   }

   for(i=0;i<5;i++)

   { if(per[i]>=90)
     {
       grade[i]= 'A';
     }
     else if(per[i]>=70)
     {
       grade[i]= 'B';
     }
     else if(per[i]>=50)
     {
      grade[i]= 'C';
     }
     else if(per[i]>35)
     {
      grade[i]= 'D';
     }
     else
     {
      grade[i]='f';
     }
   }

     printf("\nNo.\tMath\tsci\tGuj\tTotal\tper\tgrade\n");
    for(i=0; i< 5; i++)
    {
      printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",i+1,mat[i],sci[i],guj[i],total[i],per[i],
      grade[i]);

    }

   getch();
}






