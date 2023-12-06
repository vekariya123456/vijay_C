#include<stdio.h>

int fun2()
{
    int basic,hra,da;
    int gross_salary;

    printf("enter basicsalry=");
    scanf("%d",&basic);

    if(basic<=5000)
        {
            hra=basic*0.08;
            da=basic*0.20
        }
    else if (basic>5000 && basic<=10000)

        {
           hra=basic*0.12;
           da=basic*0.30;
        }
    else if(basic>10000 && basic<=15000)
        {
            hra=basic*0.15;
            da=basic*0.40;

        }    
    else
       {
        hra=basic*0.20;
        da=basic*0.50;
       }    

     printf("\nhra is=%d",hra);
     printf("\nda is=%d",da);

     gross_salary=basic+hra+da;

     return gross_salary;


}

int main()
{
    int g;
    g=fun2();

    printf("\ngross salary is=%d",g);
}

