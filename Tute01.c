/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
  float average,sub1,sub2;;
   
  printf("Enter subject 1 marks:");
  scanf("%f",&sub1); 
  printf("Enter subject 2 marks:");
  scanf("%f",&sub2);
   average=(sub1+sub2)/2.0;
   printf("Average of 2 marks:%.2f",average);
  return 0;
}
