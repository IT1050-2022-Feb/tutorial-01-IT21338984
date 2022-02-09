/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int dis,chrg; //declare variables
  float amount; //declare variables

  printf("Enter the Distance: "); //ask for the input
  scanf("%d",&dis); //get the input

  if(dis<=30) //calculation
  {
    amount=50*dis; //calculating the amount
  }
  else
  {
    amount=(30*50)+((dis-30)*40);
  }
  printf("%.2f",amount); //print the final output
  
  return 0; //end of the program
}
