#include<stdio.h>
int main()
{

    char a[30],b[30],c[30];
    int i,j,r=0;
    
    printf("enter string1:");
    scanf("%s",&a);

    printf("enter string2:");
    scanf("%s",&b);
    
    for(i=0;a[i]!='\0';i++){}
    
    for(j=0;j<i;j++)
    
    {
      c[j]=a[j];
    }
    

    for(j=i;b[r]!='\0';j++)
    {
       c[j]=b[r];
       r++;
    }

    c[j]='\0';
    
    printf("mergestring is:%s",c);

    return 0;
}

