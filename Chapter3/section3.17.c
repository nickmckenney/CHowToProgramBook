#include <stdio.h>
#include <stdlib.h>

double main(void){
    int accountNumber;
    double beginBalance,TotalCharges,TotalCredits,CreditLimit;
        while(1){
puts("AccountNumber");
scanf("%d",&accountNumber);
if(accountNumber<1){
    exit(0);
}
    puts("Balance TotalCharges TotalCredits Credlimit");
    scanf("%lf" "%lf" "%lf" "%lf",&beginBalance,&TotalCharges,&TotalCredits,&CreditLimit);
    double calc = beginBalance + TotalCharges - TotalCredits;
    printf("Total Balance is %lf",calc);

    if(calc>CreditLimit)
    puts("\n");
        puts("Credit limit exceeded");
}
}