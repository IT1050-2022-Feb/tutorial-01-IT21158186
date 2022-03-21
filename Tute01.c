/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>


int main() {
int sub_1, sub_2;
float average;  

  printf("Enter Marks of two subjects :");
  scanf("%d %d",&sub_1, &sub_2);

  printf("Average = %.f" , (sub_1+sub_2)/2.0); 
 
  return 0;
}



