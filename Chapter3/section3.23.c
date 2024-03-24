#include <stdio.h>
#include <stdlib.h>
int main(void){
int number,largest;
largest=0;
for(int count=0;count<10;count++){
scanf("%d",&number);
if(largest<number){
    largest=number;
}
 fflush(stdin);
}
printf("largest number is %d",largest);
}