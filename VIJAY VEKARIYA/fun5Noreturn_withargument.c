#include<stdio.h>

void sum(int a1,int b1)
  {
      int ans;

      ans=a1+b1;

      printf("answer is=%d\n",ans);
  }

int main()
{
    int a,b;

    printf("enter a=");
    scanf("%d",&a);

    printf("enter b=");
    scanf("%d",&b);
    sum(a,b);

}  