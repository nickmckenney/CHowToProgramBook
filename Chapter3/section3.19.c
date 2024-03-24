#include <stdio.h>
#include <stdlib.h>

double main(void){
    double LoanPrincipal,InterestRate,charge;
    int days;
    while(1){
    puts("Enter loan principal (-1 to end):");
    scanf("%lf",&LoanPrincipal);
    if(LoanPrincipal==-1){
        exit(0);
    }
    puts("Enter interest rate:");
    scanf("%lf",&InterestRate);
    puts("Enter term of the loan in days:");
    scanf("%d",&days);
    charge = (LoanPrincipal * InterestRate * days) / 365;
    printf("The interest charge is %lf",charge);

    }

}
