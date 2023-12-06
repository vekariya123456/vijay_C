#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,k=1,sum=0;
    
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
             
             if(i<j)
             {
               printf("%d ",a[i][j]);
               sum=sum+a[i][j];    
             }
             printf("\n");
          }
          printf("the lower triangal sum is:%d\n",sum);
    
         return 0;
}                                                