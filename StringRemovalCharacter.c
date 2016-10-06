#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Program to remove Character from string input
	   
void removeChar(char *str2, char garbage){ // passing str2* and garbage parameters as characters into the removeChar void method

    char *src, *dst; // initialise *src and *dst as local variables with type char
    for (src = dst = str2; *src != '\0'; src++) { // for loop when src is equal to dst and dst is equal to str2. *src is not equal to \0 and imcrement src
        *dst = *src; // set *src to *dst
        if (*dst != garbage) // if condition for *dst is not equal to variable garbage
			dst++; // increment variable dst
    }
    *dst = '\0'; // set \0 to *dst
}
	
int main(){ // main method

    char str[20], d, ch; // initialise d and ch as variables with type char and initialise str as an array of length 20 with type char
    int SUCCESS_EXIT = 0; // initialise SUCCESS_EXIT as type integer and to equal 0
    
    scanf(" %c", &ch); // read input from screen as character
    scanf("%s", &str); // read input from screen as string

    char* str2 = malloc(strlen(str)+1); // initialise variable str2 as char and equal length of the string str
    strcpy(str2, str); // copy string str to string str2
    removeChar(str2, ch); // remove string ch from str2
    printf("%s", str2); // output str2 on screen with deletion of character
    free(str2); // free str2 from address
    return SUCCESS_EXIT; // exit successfully
}