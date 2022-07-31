#include<stdio.h>

int main ()

{
int bill_units;
int bill_total;

printf("***********************************************************\n");
printf("*\t\t\t\t\t\t\t  *\n");
printf("*\t\t\t\t\t\t\t  *\n");
printf("*  Enter the number of units consumed at your residence   *\n");
printf("*\t\t\t\t\t\t\t  *\n");
scanf("%i",&bill_units);
printf("*\t\t\t\t\t\t\t  *\n");
printf("*\t\t\t\t\t\t\t  *\n");
 

 if (bill_units>=1 && bill_units<=100)
{
    bill_total=7*bill_units;
    printf("*  Unit rate is Rs.7. The total bill is Rs.%i \t\t*\n", bill_total);
    }
else if (bill_units>=101 && bill_units<=200)
{
    bill_total=10*bill_units;
    printf("*  Unit rate is Rs.10. The total bill is Rs.%i \t\t*\n", bill_total);
}
else if (bill_units>200)
{
    
    bill_total=13*bill_units;
    printf("*  Unit rate is Rs.13. The total bill is Rs.%i \t\t*\n", bill_total);
}
printf("*\t\t\t\t\t\t\t  *\n");
printf("*\t\t\t\t\t\t\t  *\n");
printf("***********************************************************\n");
return 0;
}