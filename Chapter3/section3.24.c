#include <stdio.h>

int main(void){
    int count =1;
    int value=1;
for (int i = 1; i < 11; i+=1)
{

    value=i;
    while(count!=4){
    printf("%d\t",value*=10);
    count+=1;
    }
    count=1;
    printf("\n");
}


}