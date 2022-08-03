// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS				 // Compiler ignores suggestions for secure library functions
#define BUFFER_SIZE 80						 // Macro used for initializing arrays size
#include "manipulating.h"					 // Contains the string libary functions and function prototypes used below

//V1
/*
This function prompts the user to enter two inputs
compares and concatenates the strings
prints a modified string
*/
void manipulating(void) {					 
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE]; //Declare char arrays of size 80, used for storing user inputs (strings).
	char	string2[BUFFER_SIZE];
	do {									 // Run loop at least once to obtain user inputs.
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);  // User Input (characters) are read into string1 array, newlines included.
		string1[strlen(string1) - 1] = '\0'; // Null terminated added to 2nd last index, since string1 contains a newline. Otherwise string										      concatentanion will lead to a newline between both strings.					
		if ((strcmp(string1, "q") != 0)) {		// If User enters 'q', statement is not executed
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin); // User Input (characters) are stored in the string2 array, newlines included, as a string.
			string2[strlen(string2) - 1] = '\0'; // Newline is replaced with the null terminator '\0'
			strcat(string1, string2);			// Modifies string1 by adding the string in string2 to the string stored in string1.
									
			printf("Concatenated string is \'%s\'\n", string1); // Prints modified string1 value
		}
	} while (strcmp(string1, "q") != 0);		// Loop terminates if user input string (string1 address) equals string "q"
	printf("*** End of Concatenating Strings Demo ***\n\n");
}