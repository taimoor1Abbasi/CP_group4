// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS		//Program can compile without error code C4996
#define BUFFER_SIZE 80				//Macro for BUFFER_SIZE as 80 
#define NUM_INPUT_SIZE 10			//Macro for NUM_INPUT_SIZE as 10
#include "fundamentals.h"			//Inserts a copy of the fundamentals.h header file into this file

void fundamentals(void) {		// This function is to collect string from user and find second input location within the string

	//V3
	printf("*** Start of copying Strings Demo ***\n");
	char destination[BUFFER_SIZE]; // Declare char array
	char source[BUFFER_SIZE];		// Declare char array from user
	do {
		destination[0] = '\0';		//declare first index of destination array is NULL
		printf("Destination string is reset to empty\n");
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);	//Receive char from user and store in source
		source[strlen(source) - 1] = '\0';	//Assign final char as null character
		if (strcmp(source, "q") != 0)		// This condition executes only if user does input 'q'
		{
			strcpy(destination, source); // copy string in source array to destination array
			printf("New destination string is \'%s\'\n", destination); //Display string in destination
		}
	} while (strcmp(source, "q") != 0); //Terminate iteration when user enter 'q'
	printf("*** End of Copying Strings Demo ***\n\n");
}