/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int Mark_01,Mark_02;//declare variavariables 
  float avg;
  printf("Enter Mark_01: ");//get the mark 1
  scanf("%d",&Mark_01);
  printf("Enter Mark_02: ");//get the mark 2
  scanf("%d",&Mark_02);
  
  avg=(Mark_01+Mark_02)/2; //calculate the average
  printf("%.2f",avg);//printing the final result
  
  return 0;//end of the program
}

