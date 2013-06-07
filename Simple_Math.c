#include<math.h>
#include<stdio.h>


//Function Calls - Basically it means I will use these functions to do something

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);
void modulo(int,int);

int main()
{
	int aNumber = 10; //an integer
	int anotherNumber = 5; // another integer
	
	addition(aNumber,anotherNumber); //this is the function that will add two numbers	
	subtraction(aNumber,anotherNumber); //this is the function that will subtract two numbers
	multiplication(aNumber,anotherNumber); //this is the function that will multiply two numbers
	division(aNumber,anotherNumber); //this is the function that will divide two numbers
	modulo(aNumber,anotherNumber); // this is the function that will take the remainder of divided number
	return 0;

	}



//The section where I define my functions
void addition(int First, int Second)
{
	int Answer = First + Second; //this is to make an integer to put the answer in
	printf("The sum is: %d\n",Answer); //this is to output the answer
}

void subtraction(int First, int Second)
{
	int Answer = First - Second;
	printf("The difference is: %d\n",Answer);
}

void multiplication(int First, int Second)
{
	int Answer = First * Second;
	printf("The product is %d\n",Answer);
}

void division(int First, int Second)
{
	int Answer = First/Second;
	printf("The divisor is: %d\n",Answer);
}

void modulo(int First, int Second)
{
	int Answer = First%Second;
	printf("The modulo is: %d\n",Answer);
}
