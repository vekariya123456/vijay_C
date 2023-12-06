#include<stdio.h>

int math,sci,phy,total;
float per;

void getpercentage()
   {
     per=(total*100)/300;

     printf("percentage is=%f",per);
   }

void gettotal()
  {
    total=math+sci+phy;
    printf("total marks is=%d\n",total);
    getpercentage();
  }

void getmark()
  {
    printf("enter math mark:");
    scanf("%d",&math);
    printf("enter sci mark:");
    scanf("%d",&sci);
    printf("enter phy  mark:");
    scanf("%d",&phy);

    gettotal();
  }

int main()
  {
    printf("Enter student marrks--->\n");
    getmark();
  }
