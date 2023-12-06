#include<stdio.h>

int perfect(int num)
{
    int n,sum=0,i;
    n=num;

    for(i=1;i<n;i++)
      {
        if(n%i==0)
        sum=sum+i;
      }

    if(n==sum)
       {
        printf("%d is perfect number",num);
       }
    else
      { 
        printf("%d is not perfecr number",num);
      } 
}

int main()
{
    int num;
    
    printf("enter number=");
    scanf("%d",&num);
   
    perfect(num);

}