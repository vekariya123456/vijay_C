#include<stdio.h>
#include<conio.h>
void main()
{
    float basic,hra,da;
    float gross_salary;
    clrscr();
    printf("enter basic:");
    scanf("%f",&basic);

    if (basic<=5000)
    { hra=basic*0.08;
       da=basic*0.20;
    }
    else if (basic<=10000)
    { hra=basic*0.12;
      da=basic*0.30;
    }
    else if (basic<=15000)
    { hra=basic*0.15;
      da=basic*0.40;
    }
    else
    {  hra=basic*0.20;
	     da=basic*0.50;
    }
    gross_salary=basic+hra+da;
    printf("hra %f\n",hra);
    printf("da %f\n",da);
    printf("gross_salary %f",gross_salary);

    getch();
    }
