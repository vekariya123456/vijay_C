#include<stdio.h>
int main()
{
   int a[5][5];
   int i,j;
 
   for(i=0;i<5;i++)
       {
         for(j=0;j<5;j++)
            {
              a[i][j]=j+1;
            }
        }
   
   for(i=0;i<5;i++)
        {
          for(j=0;j<5;j++)
              {
                printf("%d ",a[i][j]);
              }
              printf("\n");
          }
        return 0;
}