#include<stdio.h>
int main()
{
    char str[20];
    int i=0;

     printf("enter  value");
     scanf("%[^\n]s",&str);   


     while(str[i]!='\0')
       {
         printf("char is:%c\n ",str[i]);
         i++;
       }
     printf("length is: %d",i);
     return 0;
}