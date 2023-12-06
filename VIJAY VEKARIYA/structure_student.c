#include<stdio.h>

struct student
{
    int math[5],sci[5],guj[5],total[5],per[5];
    char name[5],grade[5];
};

int main()
{   
    struct student data; 
    
    for(int i=0;i<5;i++)
     {
        printf("\nEnter student  marks-->%d\n",i+1);
        scanf("%s",&data.name[i]);       
        
        printf("enter math mark:");
        scanf("%d",&data.math[i]);
        
        printf("enter sci mark:");
        scanf("%d",&data.sci[i]);
        
        printf("enter guj mark:");
        scanf("%d",&data.guj[i]);

        data.total[i]=data.math[i]+data.sci[i]+data.guj[i];
        printf("total marks:%d\n",data.total[i]);

        data.per[i]=(data.total[i])/3;
        printf("Percentage:%d",data.per[i]);
     }    

 for(int i=0;i<5;i++)
   {
     if(data.per[i]>=90)
      {
        data.grade[i]='A';
      }
    else if(data.per[i]>=70)
      {
        data.grade[i]='B';
      }  
    else if(data.per[i]>=50)
     {
        data.grade[i]='C';
     }  
    else if(data.per[i]>=35)
     {
        data.grade[i]='D';
     } 
    else
     {
        data.grade[i]='F';
     } 
   }


   printf("\nName\tmath\tsci\tguj\ttotal\tper\tgrade\n");

   for(int i=0;i<5;i++) 
     {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%c\n",i+1,data.math[i],data.sci[i],data.guj[i],data.total[i],data.per[i],data.grade[i]);
     }  

}