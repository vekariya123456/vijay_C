#include<stdio.h>
int main()
{
   int a[5][5];
   int i,j,k=11;
 
   for(i=0;i<5;i++)
       {
         for(j=0;j<5;j++)
            {
              a[i][j]=k++;
            }
            k+=5;
        }
   
   for(i=0;i<5;i++)
        {
          for(j=0;j<5;j++)
              {
                printf("%d\t",a[i][j]);
              }
              printf("\n");
          }
        return 0;
}