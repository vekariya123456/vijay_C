#include<stdio.h>
int main()
{
   char str[50],restr[50];
   int i,j,r=0;

   printf("enter string value:");
   scanf("%[^\n]s",&str);

   for(i=0;str[i]!='\0';i++){}
   i--;
   
   for(j = i; j >=0 ; j--)
   {
     restr[r]=str[j];
     r++;
   }   
   
   restr[r]='\0';

   printf("restring is:%s",restr);
    
   return 0;
}

