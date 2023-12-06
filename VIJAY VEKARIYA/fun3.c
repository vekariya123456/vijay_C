#include<stdio.h>

int fun3()
{
    int phy,sci,mat;
    int total,per;

    printf("enter phy=");
    scanf("%d",&phy);

    printf("enter sci=");
    scanf("%d",&sci);
    
    printf("enter mat=");
    scanf("%d",&mat);

    total=phy+sci+mat;

    per=(total*100)/300;

    return per;
}

int main()
{
    int res;
    res=fun3();

    printf("\npersentage is %d",res);

    if(res>=75)
      {
        printf("\ngrade A");

      }
    else if(res>=60)
      {
        printf("\ngrade B");
      }
    else if(res>45)
      {
        printf("\ngrade C");
      }
    else if(res>=35)
       {
         printf("\ngrade D");
       }
    else
       {
        printf("\nfail");
       }    

       
}