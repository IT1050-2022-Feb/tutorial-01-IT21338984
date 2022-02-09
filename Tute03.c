/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int x,n,num,tot=0; //decalre variables 

  printf("Enter Any Number: "); //ask for the input
  scanf("%d",&num); //get the input

  for(x=1;x<=num;x++) //calculation through a loop 
  {
    tot=tot+x;
  }
  printf("Total: %d",tot); //printing the final output

  return 0; //end of the program
}

