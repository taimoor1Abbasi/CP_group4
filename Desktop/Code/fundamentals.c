// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS		//Program can compile without error code C4996
#define BUFFER_SIZE 80				//Macro for BUFFER_SIZE as 80 
#define NUM_INPUT_SIZE 10			//Macro for NUM_INPUT_SIZE as 10
#include "fundamentals.h"			//Inserts a copy of the fundamentals.h header file into this file

void fundamentals(void) {		// This function is to collect string from user and find second input location within the string
	//V1
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];	// Declare char array and store string from user
	char numInput[NUM_INPUT_SIZE];	// Declare char array
	size_t position; //find position where numInput is located in the buffer1 array
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);	// Receive string from user and store input in buffer1
		buffer1[strlen(buffer1) - 1] = '\0'; // Assign final char as null character
		if (strcmp(buffer1, "q") != 0){			// This condition executes if user does input 'q'
			printf("Type the character position within the string:\n");		
			fgets(numInput, NUM_INPUT_SIZE, stdin);		//Receive char from user and store in numInput
			numInput[strlen(numInput) - 1] = '\0';		//Assign final char as null character
			position = atoi(numInput);					// Convert char numInput into integer position
			if (position >= strlen(buffer1)) {			// This condition exectes if number of position is larger then lenghth of buffer1
				position = strlen(buffer1) - 1;			// Assign postion to length of buffer1 - 1
				printf("Too big... Position reduced to max. availbale\n");
			}
			printf("The character found at %d position is \'%c\'\n",
				(int)position,buffer1[position]);		// prind location of numInput in the buffer1 array
		}
	} while (strcmp(buffer1, "q") != 0);			// Terminates iteration when user enter 'q'
	printf("*** End of Indexing Strings Demo ***\n\n");
}
