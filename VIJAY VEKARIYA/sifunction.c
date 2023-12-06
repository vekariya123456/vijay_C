#include<stdio.h>
int si()
{
    int p,r,t,si;
    p=34000;
    r=30;
    t=5;

    si=(p*r*t)/100;
    return si;
}


int main()

{
   int ans;
   ans=si();

   printf("si is %d\n",ans);

}