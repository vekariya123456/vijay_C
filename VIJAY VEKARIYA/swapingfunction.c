#include<stdio.h>
void swap()
{
    int a=10,b=20,c;

    c=a;
    a=b;
    b=c;

    printf("ans a %d\n",a);
    printf("ans b %d",b);
}
int main()
{
     swap();


}