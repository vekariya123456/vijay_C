#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j;
    
    for(i=0;i<5;i++)
        {
          for(j=0;j<5;j++)
            {
               a[i][j]=i;
            }
        }
    
     for(i=0;i<10;i+=2)
          {
            for(j=0;j<5;j++)
            
             {
               printf("%d ",i+2,a[i][j]);
                   
             }
             printf("\n");
          }
         
         return 0;
}      