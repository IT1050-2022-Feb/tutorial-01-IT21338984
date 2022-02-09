/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//declare the function protoprototypes
int maximum(int num1, int num2);
int minimum(int num1, int num2);
int multiply(int num1, int num2);
int main()
{
   int no1, no2; //declare the variables 
   int min, max, mul; //declare the variables

   printf("Enter a value for no 1 : "); //ask for the input 1
   scanf("%d", &no1); //get the input 1
   printf("Enter a value for no 2 : "); //ask for the input 2
   scanf("%d", &no2); //get the input 2
  
  //connecting the variables with prototypes 
   min=minimum(no1, no2); 
   max=maximum(no1, no2);
   mul=multiply(no1, no2);

  //printing the final outputs
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int maximum(int num1, int num2)
{
  if(num1>num2) //calculation through condiconditions 
    return num1; //returning the output to main
  else
    return num2; //returning the output to main
}
int minimum(int num1, int num2)
{
  if(num1<num2)//calculation through condiconditions
    return num1; //returning the output to main
  else
    return num2; //returning the output to main
}
int multiply(int num1, int num2)
{
  return num1 * num2; //returning the output to main
}