#include<stdio.h>

int even(int a)
{ 
    int c;
    c=a+a;

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
        ans=even(i);
        printf("%d ",ans);
      }
      
    
}