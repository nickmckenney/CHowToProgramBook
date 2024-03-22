#include <stdio.h>
 int main(void){
    int x,y,z=0;
  puts("enter 3 ints");
  scanf("%d%d%d",&x,&y,&z);
    int result = x*y*z;
    printf("the product is %d", result);
 }