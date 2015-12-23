/*
strings_as_pointers.c

Basic example of storing, and manipulating strings in C using char arrays (char my_string[])

author: github.com/thaletterb
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings_as_arrays.h>

int main(){
	char my_string[] = "Hello World!";
	char *my_copied_string, *my_reversed_string;
	//char *my_string, *my_copied_string, *my_reversed_string;
	int len_of_my_string;

	// Basic string printing
	printf("BASIC STRING PRINTING: \n");
	//my_string = "Hello World!";
	printf("%s\n", my_string);
	print_my_string(my_string);
	printf("\n");
	
	// Print length of string
	printf("LEN OF STRING: \n");
	len_of_my_string = my_strlen(my_string);
	printf("\'%s\' length: %d\n", my_string, len_of_my_string);
	printf("\n");

	// Copy and print string
	printf("STRING COPYING: \n");
	my_copied_string = my_strcpy(my_string);
	printf("%s", my_copied_string);
	printf("\n");
	//my_string = "Goodbye World!";
	printf("%s", my_string);
	printf("\n");
	printf("%s", my_copied_string);	// Points to original location in memory of "my_copied_string"
	printf("\n");

	// Reverse a string
	printf("STRING REVERSAL: \n");
	my_reverse_string(my_string);
	return 0;
}

int my_strlen(char my_string[]){
// Returns length of my_string
	int i=0;
	for(i=0; *(my_string++) != '\0'; i++){
	}
	return i++;
}

void print_my_string(char *my_string){
// Prints each element of my_string, line by line
	int i=0;
	for(i=0; *my_string != '\0'; i++){
		printf("Index %d: %c \n", i, *my_string);
		*(my_string++);
	}
}

char* my_strcpy(char *my_string){
// returns a copy of my_string 
	char* dest_string;
	dest_string = my_string;
	return dest_string;
}

char* my_reverse_string(char *my_string){
// Returns a reversed version of my_string
	int str_len = my_strlen(my_string);
	int i = 0;

	//char* reversed_string;						// Does not work!! Does not know how big reversed string is
	char* reversed_string = malloc((str_len+1));	// Need to allocate enough memory to hold the string

	for(i=0; i<str_len; i++){
		*(reversed_string+i) = *(my_string+((str_len-1)-i));
	}
	printf("%s\n", reversed_string);
	return reversed_string;
}
