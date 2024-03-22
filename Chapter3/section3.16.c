#include <stdio.h>
#include <stdlib.h>

double main(void){
    double miles,gallons=0;
    printf("Enter miles and gallons");
    scanf("%lf %lf",&miles,&gallons);
    double result = miles/gallons;
    printf("result is %lf",result);
    }