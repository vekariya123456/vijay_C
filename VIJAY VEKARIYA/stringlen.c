#include<stdio.h>
int main()
{
   char str[50];
   int l;

   printf("enter string value:");
   scanf("%[^\n]s",&str);

   for(l=0;str[l]!='\0';l++){}

   printf("string lengtjh is:%d",l);
    
   return 0;
}

