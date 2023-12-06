#include<stdio.h>
int main()
{
   int a[5][5];
   int i,j,b=0;
 
   for(i=5;i>0;i--)
       {
         for(j=0;j<5;j++)
            {
              a[b][j]=i;
            }
            b++;
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