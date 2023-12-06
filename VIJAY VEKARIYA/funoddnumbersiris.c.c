#include<stdio.h>

int even(int a,int b)
{ 
    int c;
    c=a+b;

    return c;

}

int main()
{
    int i,n;
    int ans;

    printf("enter n=");
    scanf("%d",&n); 
    
    for(i=0;i<=n;i++)
      {
        ans=even(i,i);
        printf("%d ",ans);
      }
      
    
}