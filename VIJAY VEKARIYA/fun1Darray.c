#include<stdio.h>

int arr[10]={2,4,6,8,10,12,14,16,18,20};

int array(int i)
{
    printf("%d, ",arr[i]);

    if(i<9)
    {
        return array(++i);
    }
    else
    {
        return i;
    }
}

int main()
{
    array(0);
}  
