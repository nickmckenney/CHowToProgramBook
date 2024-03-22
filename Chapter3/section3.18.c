#include <stdio.h>
#include <stdlib.h>
double main(void){
    double sales,salary;
    while(1){

puts("Enter sales in dollars (-1 to end): ");
scanf("%lf",&sales);

if(sales == -1){
exit(0);
}

salary = (sales*1.09) + 200.00;

printf("Salary is: %lf",salary);
puts(" ");
} 
}
