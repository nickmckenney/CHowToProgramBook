#include <stdio.h>

int main(void){
    int count=1;
    int value =1;
    for(int i=1;i<6;i+=1){
        while(count!=5){
            printf("%d \t",value+=2);
            count+=1;
        }
        printf("\n");
        count=1;
        value=i;
        value*=3;
        value+=1;
    }
}