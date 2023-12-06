#include<stdio.h>

int minus(int a1,int b1)
{

    int c;
    c=a1-b1;

    return c;
}
 
int main()
{
    int a,b,ans;

    printf("enter a=");
    scanf("%d",&a);

    printf("enter b=");
    scanf("%d",&b);
    
   ans=minus(a,b);

   printf("answer is=%d",ans);
}
