#include<stdio.h>

// Program to sort array into ascending order by even numbers

int main(){ // main method

	int i, j, temp, swapped; // initialise variables i, j, temp and swapped as type integer
	int s = 10; // initialise variable s as type integer and set to 10
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10; // initialise variables num1, num2, num3, num4, num5, num6, num7, num8, num9 and num10 as type integer 
	int numbers[10] = {num1, num2, num3, num4, num5, num6, num7, num8, num9, num10}; // initialise array numbers as type integer and set to 10
	int SUCCESS_EXIT = 0;  // initialise SUCCESS_EXIT as type integer and to equal 0
	int evennumbers[10]; // initialise array numbers as type integer and set to 10
	
	for (int i = 0; i < s; i++){ // for condition when i is equal to 0. i is less than length of array. increment variable i
	scanf("%d", &numbers[i]); // read input from screen as integer and store in array
	}
	
	// even number ---------------------
	
	int t = 0; // initialise variable t as type integer and set as 0
	
    for(i = 0; i < s; i++){ // for loop, i is set as 0, is less than s and increment i
        if(numbers[i] % 2 == 0){ // if condition for numbers i mod 2 is equal to 0
			evennumbers[t] = numbers[i]; // set evennumbers t as numbers i
			t++; // increment t
        }
    }
	
	for(i = 0; i < t - 1; i++){ // for loop, i is set as 0, is less than t minus 1 and increment i
		for(j = 0; j < t - i - 1; j++){ // for loop, j is set as 0, is less than t minus i minus 1 and increment j
			if(evennumbers[j] > evennumbers[j+1]){ // if condition for evennumbers j is larger than evennumbers j plus 1
				temp = evennumbers[j]; // set temp as evennumbers j
				evennumbers[j] = evennumbers[j+1]; // set variable j in evennumbers array and as array evennumbers j plus 1  
				evennumbers[j+1] = temp; // set variable j in evennumbers array as plus 1 and as temp 
			}
		}
	}
	
	int k = 0; // initialise variable k as type integer and set as 0
	
	for(i = 0; i < s; i++){ // for loop, i is set as 0, is less than s and increment i
		if(numbers[i] % 2 == 0){ // if condition for variable i in numbers array mod 2 is equal to 0
			numbers[i] = evennumbers[k]; // set variable i in numbers array as even numbers variable k
			k++; // increment k
		}
		printf(" %d", numbers[i]); // output numbers in array
	}
	
 
	// ---------------------------------
 
 	printf("\n"); // output new line
 
	return SUCCESS_EXIT; // exit successfully
}