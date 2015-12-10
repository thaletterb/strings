/*
strings_as_pointers.c

Basic example of storing, and manipulating strings in C using char pointers (char *my_pointer)

author: github.com/thaletterb
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings_as_pointers.h>

int main(){
	char *my_string, *my_copied_string;
	int len_of_my_string;

	// Basic string printing
	printf("BASIC STRING PRINTING: \n");
	my_string = "Hello World!";
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

	// Reverse a string
	printf("STRING REVERSAL: \n");
	my_reverse_string(my_string);
	return 0;
}

int my_strlen(char *my_string){
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
	char* reversed_string;
	reversed_string = (char *)malloc(sizeof(my_string));
	int str_len = 0;
	
	str_len = my_strlen(my_string);
	printf("%c", *(my_string));
	while(str_len > 0){
		*(reversed_string+str_len) = *(my_string);
		my_string++;
		str_len--;
	}
	printf("%s", reversed_string);
	return reversed_string;
}
