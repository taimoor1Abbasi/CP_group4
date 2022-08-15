// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS		// Compiler ignores suggestions for secure library functions
#define BUFFER_SIZE 80				// Macro used for initializing arrays size is 80
#include "manipulating.h"			// Contains the string libary functions and function prototypes used below


/* Manipulating Module
* Prompts the user for two string inputs for each version.
* V1 cocatenates them, V2 compares them and V3 does a string search. 
*/

void manipulating(void) {
	// V1
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE]; //Char arrays of size 80, used for storing user string inputs.
	char	string2[BUFFER_SIZE];
	do {						 // Run loop at least once to obtain user inputs.
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);  // User input is read into string1 array, character can be a newline. Last index contains the null terminator.
		string1[strlen(string1) - 1] = '\0';				// Null terminator added to last meaningful character in array. Otherwise if the last character is a newline, the string concatenation will contain a newline.
		if ((strcmp(string1, "q") != 0)) {			// Statement not executed if 'q' is entered.
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin); // User Input is stored in the string2 array.
			string2[strlen(string2) - 1] = '\0';				// Incase the last meaningful character is a newline, it is replaced with the null terminator.
			strcat(string1, string2);				// Modifies string1 by concatenating string2 to string1.						
			printf("Concatenated string is \'%s\'\n", string1); // Prints modified string1 value
		}
	} while (strcmp(string1, "q") != 0);		// Loop terminates if user input string (string1 address) equals string "q"
	printf("*** End of Concatenating Strings Demo ***\n\n");


	// V2
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE]; //Char array of size 80, used for storing user inputs.
	char compare2[BUFFER_SIZE];
	int result; 				// Contains the value of the string comparison
	do {						// Run loop at least once to obtain user input
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin); // Input (only 80 characters) is read into the compare1 array from the standard input
		compare1[strlen(compare1) - 1] = '\0'; 				// Null terminator added to second last element of compare1, otherwise string could potentially include a newline.
		if (strcmp(compare1, "q") != 0) { 			// Statement only executed if user did not input "q"
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin); // Input is stored in the compare2 array
			compare2[strlen(compare2) - 1] = '\0'; 				// Replace last meaningful character with with the null terminator
			result = strcmp(compare1, compare2);			// Compare the strings and store it's result in variable named result
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); 	// Only printed when compare1's string is less than compare2's string
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2); 	// Printed when compare1's string is equal compare2's string
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); // Printed only when compare1's string is greater than compare2's string
		}

	} while (strcmp(compare1, "q") != 0); // End loop if string (stored in compare1) is equal to "q"
	printf("*** End of Comparing Strings Demo ***\n\n");

	// V3
	printf("*** Start of Searching Strings Demo ***");
	char	haystack[BUFFER_SIZE]; // Char array of size 80, stores the string we want to search
	char	needle[BUFFER_SIZE];  // Char array of size 80, stores the string we want to look for
	char* occurence = NULL;	 // Pointer that will contain the address of the indexed element

	do {
		printf("Type the string (q - to quit):\n");
		fgets(haystack, BUFFER_SIZE, stdin);	// Input (only 80 characters) is read into haystack from the standard input
		haystack[strlen(haystack) - 1] = '\0';					// Assign a null terminator to the last meaningful character in haystack array
		if (strcmp(haystack, "q") != 0) {
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin);	// Read 80 characters from the standard input into needle
			needle[strlen(needle) - 1] = '\0';					// Assign a null terminator to last meaningful character in needle array
			occurence = strstr(haystack, needle);			// Search haystack for any occurence of needle's string, return address or 0 if not found and assign to occurence
			if (occurence)											// Statement will only execute if the memory address exists
				printf("\'%s\' found at %d position\n", needle, (int)(occurence - haystack));	// Outputs string we searched for and the integer position it's found in the haystack string
			else									// Memory address does not exist
				printf("Not found\n");
		}
	} while (strcmp(haystack, "q") != 0); // Loop terminates when user enters "q"
}







