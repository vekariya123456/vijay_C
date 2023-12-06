#include<stdio.h>

void a(int amount)
{
     int coin[]={25,10,5,2,1};
     int numcoin[]={0,0,0,0,0};

     int i;

     for(i=0;i<5;i++)

     {
        numcoin[i]=amount/coin[i];
        amount=amount%coin[i];
     }

     printf("25:%d\n",numcoin[0]);
     printf("10:%d\n",numcoin[1]);
     printf("5:%d\n",numcoin[2]);
     printf("2:%d\n",numcoin[3]);
     printf("1:%d\n",numcoin[4]);
     

}

int main()
{
    int n;

    printf("enter amount=");
    scanf("%d",&n);

    a(n);
    
}