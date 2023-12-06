#include<stdio.h>
int main()
{
   int a[5][5];
   int i,j,k=65;
 
   for(i=0;i<5;i++)
       {
         for(j=0;j<5;j++)
            {
              a[i][j]=k++;
            }
           
        }
   
   for(i=0;i<5;i++)
        {
          for(j=0;j<5;j++)
              {
                printf("%c\t",a[i][j]);
              }
              printf("\n");
          }
        return 0;
}