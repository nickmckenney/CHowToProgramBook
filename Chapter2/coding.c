#include <stdio.h>

int main(void) {
   printf("Enter two integers, and I will tell you\n");
   printf("the relationships they satisfy: ");

   int number1 = 0; // first number to be read from user
   int number2 = 0; // second number to be read from user
   
   scanf("%d %d", &number1, &number2); // read two integers
   
   if (number1 == number2) {                          
      printf("%d is equal to %d\n", number1, number2);
   }                                       
} 