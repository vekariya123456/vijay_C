#include<stdio.h>
int main()
{
   int a[3][3];
   int i,j,k=1,sum;
   
   for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
           {
             a[i][j]=k++;
           }
       }
    for(i=0;i<3;i++)
       {
         for(j=0;j<3;j++)
            {
              printf("%d ",a[i][j]);
              if(i == j)
              {
               sum+=a[i][j];
              }
              
            }
        printf("\n");
      }
       printf("the dialog sum %d",sum);
    
     return 0;
}