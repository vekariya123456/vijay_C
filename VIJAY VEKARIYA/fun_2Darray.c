#include<stdio.h>

int arr[3][3];
int i,j,k=1;

int array()
{
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
          {
            arr[i][j]=k++;
            printf("%d ",arr[i][j]);
          }
          printf("\n");
      }
}

int main()
{
   for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
          {
             printf("Array is [%d] [%d]=",i,j);
             scanf("%d",&arr[i][j]);
          }
      } 
      printf("\n");
     
     array();
}

