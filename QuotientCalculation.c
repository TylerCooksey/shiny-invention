#include<stdio.h>
#include<math.h>

// Program to work out the quotient of three numbers

int main(){
	
	int result, a, b, nthresult, nthresult2, number1, number2, number3, c; // initialise variables result, a, b, nthresult, nthresult2, number1, number2, number3, c as type integer
	int EXIT_SUCCESS = 0; // initialise SUCCESS_EXIT as type integer and to equal 0
	
	scanf("%d", &number1); // read input from screen as integer
	scanf("%d", &number2); // read input from screen as integer
	scanf("%d", &number3); // read input from screen as integer
	
	if(0 > number1 <= 60000){ // if condition for when number1 is more than 0 and smaller than or equal to 60000
		if(0 > number2 <= 60000){ // if condition for when number2 is more than 0 and smaller than or equal to 60000
			if(0 > number3 <= 60000){ // if condition for when number3 is more than 0 and smaller than or equal to 60000
				a = number1; // set a as number1
				b = number2; // set b as number2
				c = number3; // set c as number3
			}
		}
	}
	
	result = a % b; // set result as a mod b
	int temp; // initialise variable temp as type integer
	int quotient; // initialise variable quotient as type integer
	for(int i = 0; i < c; i++){ // for loop, i is set as 0, is less than s and increment i
		temp = result * 10 % b; // set temp as result multiply 10 mod b
		quotient = result * 10 / b; // set quotient as result multiply 10 divided b
		result = temp; // set result as temp
	}

	printf("%d", quotient); // output quotient
	
	return EXIT_SUCCESS; // exit successfully
}