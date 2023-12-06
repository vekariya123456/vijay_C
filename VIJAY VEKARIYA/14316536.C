#include <stdio.h>
void main ()
{
int a,n;
scanf("%d",&n);
for (a=1;a<=n;a++)
if(a%2==1)
{
printf ("\n%d",a);
}else
     {
     printf ("\n%d",a*a);
     }
}
