#include<stdio.h>

int fun4()
{
   int unit,total;

   printf("Enter unit=");
   scanf("%d",&unit);

    if(unit>=100)
      {
        total=(unit)*0.60+50;
      }
    
    else if(unit>100 && unit<=300)
      {
        total=60+(unit-100)*0.80+50;
      }  
    else if(unit>300)
       {
        total=60+160+(unit-300)*0.90+50;
       }

       return total;
}

int main()
{
   int totalbill;

   totalbill=fun4();

   if(totalbill>300)
      {
        
      }
}


