#include<stdio.h>
int main()
{
   int a[3][3];
   int b[3][3];
   int i,j,sum=0;
 
   for(i=0;i<3;i++)
       {
         for(j=0;j<3;j++)
            {
              a[i][j];
              b[i][j];
            }
           
        }
   
   for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
              {
                printf("%d\t %d\t",a[i][j,b[i][j]]);
                sum=a[i][j]+b[i][j];
              }
              printf("\n");
              printf("sum toatl %d ",sum);
          }
        return 0;
}