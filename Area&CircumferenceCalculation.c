#include<stdio.h>
#include<math.h>
#define PI 3.14

// program to output area and circumference of two inputs

main(){ // main method
	
	double diameter, area = 0, circumference = 0;
	int r1 = 0, r2 = 0;
	int EXIT_SUCCESS = 0;  // initialise SUCCESS_EXIT as type integer and to equal 0
	
	scanf("%d", &r1); // read input from screen as float
	scanf("%d", &r2); // read input from screen as float
	
	while(r1 <= r2){ // while condition for when r1 is less than or equal to r2
		area = area + PI * pow(r1, 2); // set area as area plus PI multiply r2 squared
		circumference = circumference + 2 * PI * r1; // set circumference as circumference plus 2 multiply PI multiply r1
		float tr = ((int)(circumference * 10)) / 10.000; // initialise variable tr as type float as circumference multiplied by 10, divided by 10
		float tr2 = ((int)(area * 10)) / 10.000; // initialise variable tr2 as type float as circumference multiplied by 10, divided by 10
		r1++; // increment r1
	}
	printf("%.3f", area);// output area 
	printf("\n%.3f", circumference); // output circumference
	return EXIT_SUCCESS; // exit successfully
}