// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS //Ingnore warnings from IDE
#define BUFFER_SIZE 80     //Decalrs a global variable and sets it to 80
#include "converting.h"   //Incudes header file that has function prototype and libraies to c File
// V1
/*void converting(void) { //function of converting a entered string numeric value to an int value
printf("*** start of Converting strings to int Demo ***\n"); 
char intstring[BUFFER_SIZE];  //Delcare user input char array or string for storing user values and process them
int intNumber;  //Declare the variable that stores the resultant output of the conversion function 
do {       //infinite do loop that runs until q is selected
	printf("Type an int numeric string (q - to quit): \n");
	fgets(intstring, BUFFER_SIZE, stdin); //receives input from the user and stores it in intstring 
	intstring[strlen(intstring) - 1] = '\0'; //Sets the final character of the inputted value to \0
	if (strcmp(intstring, "q") != 0) { //Checks if q is entered and if q is entered the if statement doesn't run
		intNumber = atoi(intstring);  //call conversion function that converts a int string to a int value and store it in intNumber
		printf("Converted number is %d\n", intNumber); //print the value after conversion
	}
} while (strcmp(intstring, "q") != 0); //checks if string is equal to q is true exits loop
	printf("*** End of Converting Strings to int Demo ***\n\n");
}
*/
//V2
void converting(void) { //function of converting a entered string numeric value to an double value
	printf("*** Start of converting String to double Demo ***\n");
	char doubleString[BUFFER_SIZE]; //Delcare user input char array or string for storing user values and process them
	double doubleNumber; //Declare the variable that stores the resultant output of the conversion function 
	do  //infinite do loop that runs until q is selected
	{
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin); //receives input from the user and stores it in doubleString 
		doubleString[strlen(doubleString) - 1] = '\0';  //Sets the final character of the inputted value to \0
		if (strcmp(doubleString,"q") !=0)  //Checks if q is entered and if q is entered the if statement doesn't run
		{
			doubleNumber = atof(doubleString); //call conversion function that converts a double string to a float value and store it in doubleNumber
			printf("Coneverted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString,"q") !=0);  //checks if string is equal to q is true exits loop
	printf("*** End of Converting Strings to double Demo ***\n\n");
}