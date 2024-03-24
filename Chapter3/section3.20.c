#include <stdio.h>
#include <stdlib.h>
double main(void){
double hours,rate,salary;
while(1){
scanf("Enter # of hours worked (-1 to end): %lf",&hours);
if(hours==-1){
    exit(0);
}
scanf("Enter hourly rate of the worker ($00.00): %lf",&rate);
    salary = hours*rate;

if(hours>40.0){
    hours-=40.0;
    salary+=hours*rate;
}
printf("Salary is: %lf",salary);
}
}