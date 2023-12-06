#include<stdio.h>


void getper(int total)
{
   int per;

   per=(total*100)/300;
   printf("percentage is=%d\n",per);

}

void gettotal(int math,int sci, int phy)
{
    int total;

    total=math+sci+phy;
    printf("total marks is=%d\n",total);
    
    getper(total);
}

void marks()
{
    int math,sci,phy;
    
    printf("enter maths mark=");
    scanf("%d",&math);
    printf("enter sci mark=");
    scanf("%d",&sci);
    printf("enter phy mark=");
    scanf("%d",&phy);
    
    gettotal(math,sci,phy);
}

int main()
{
   printf("student marks and percentge--->\n");
   marks();
}