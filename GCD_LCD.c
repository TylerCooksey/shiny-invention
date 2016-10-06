#include<stdio.h>

// Program to work out greatest common divisor and least common divisor
 
int main(){ //main method
		
	int a, b, number1, number2, t, gcd, lcm; // initialise variables a, b, number1, number2, t, gcd and lcm as type integer
	int EXIT_SUCCESS = 0; // initialise SUCCESS_EXIT as type integer and to equal 0
	 
	scanf("%d", &number1); // read input from screen as integer
	scanf("%d", &number2); // read input from screen as integer
	
	if(number1 > 0){ // if condition for number1 has to be larger than 0
		if(number2 > 0){ // if condition for number2 has to be larger than 0
			a = number1; // set number1 as a
			b = number2; // set number2 as b
		}
	}
	 
	while (b != 0) { // while condition for variable b when its not equal to 0
		t = b; // set b as t
		b = a % b; // set a mod b as b
		a = t; // set t as a
	}
	 
	gcd = a; // set a as gcd
	lcm = (number1 * number2) / gcd; // set number1 * number2 / gcd as lcm
	
	printf("\n\n"); // print two new lines
	printf("Greatest common divisor of %d and %d = %d\n", number1, number2, gcd); // output greatest common divisor
	printf("Least common multiple of %d and %d = %d\n", number1, number2, lcm); // output least common divisor
	 
	return EXIT_SUCCESS; // exit successfully
}