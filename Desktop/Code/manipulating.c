// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS				 // Compiler ignores suggestions for secure library functions
#define BUFFER_SIZE 80						 // Macro used for initializing arrays size is 80
#include "manipulating.h"					 // Contains the string libary functions and function prototypes used below

//V1
/*
This function prompts the user to enter two inputs
compares and concatenates the strings
prints a modified string
*/
void manipulating(void) {					 
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE]; //Declare char arrays of size 80, used for storing user string inputs.
	char	string2[BUFFER_SIZE];
	do {									 // Run loop at least once to obtain user inputs.
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);  // User Input (characters) are read into string1 array, characters can be a newline.
		string1[strlen(string1) - 1] = '\0'; // Null terminated added since string1 contains a newline (index 79). Otherwise string concatentanion will lead to a newline between both strings.		
		if ((strcmp(string1, "q") != 0)) {		// Statement not executed if 'q' is entered.
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin); // User Input (characters) are stored in the string2 array, newlines included, as a string.
			string2[strlen(string2) - 1] = '\0'; // Last character (newline) is replaced with the null terminator.
			strcat(string1, string2);			// Modifies string1 by concatenating string2 to string1.						
			printf("Concatenated string is \'%s\'\n", string1); // Prints modified string1 value
		}
	} while (strcmp(string1, "q") != 0);		// Loop terminates if user input string (string1 address) equals string "q"
	printf("*** End of Concatenating Strings Demo ***\n\n");
}