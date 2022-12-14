//TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS // ignoring warnings from IDE
#define BUFFER_SIZE 300         // declare a variable for the size of the buffer
#include "tokenizing.h"         // includes the header file which contains function prototypes, librarys, structs

// VI
void tokenizing(void) {                 //function of tokenizing, user inputs some words and ir will output each word on a separate line
	/*printf("*** Start of Tokenizing Words Demo ***\n");  //print the sentence
	char words[BUFFER_SIZE];               //declare the user input ,char variable string and stores it
	char* nextword = NULL;                   // declare a char pointer to check the string until the last word
	int wordsCounter;                        // declare the int variable to count the number of use input words
	do                                       // infinite do loop to seperate and count the words until q is entered
	{
		printf("Type a few words separated by space (q - to quit) : \n");   //print the sentence
		fgets(words, BUFFER_SIZE, stdin);         //gets the input words from user in stores it in words
		words[strlen(words) - 1] = '\0';         //sets the last character of the input to \0
		if (strcmp(words, "q") != 0) {             // checks if q is intered if not it continues if yes ends the loop
			nextword = strtok(words, " ");         // check the space and goes for the next word
			wordsCounter = 1;                      // sets wordscounter into 1
			while (nextword)                       // loop will continue until there is no other words
			{
				printf("Word #%d is \'%s\ '\n", wordsCounter++, nextword); // print the words and number of words
				nextword = strtok(NULL, " ");              //when there is no word left to retrieve, strtok returns NULL
			}
		}
	} while (strcmp(words, "q") != 0);         ////checks if string is equal to q is true exits loop
			printf("*** End of Tokenizing Words Demo ***\n\n"); // prints the last sentence
		
			
			
			//V2
			printf("*** Start of Tokenizing Phrases Demo ***\n"); // prints out the sentence
			char phrases[BUFFER_SIZE];                           //declare the user input ,char variable string and stores it
			char* nextPhrase = NULL;                                 // declare a char pointer to check the string until the last phrase
			int  phrasesCounter;                                  // declare the int variable to count the number of used input phrases

			do {                                                      // infinite do loop to seperate and count the phrases until q is entered
				printf("Type a few phrases separated by comma (q- to quit) : \n"); //prints out the sentence
				fgets(phrases, BUFFER_SIZE, stdin);                                //gets the input phrases from user and stores them in phrases
				phrases[strlen(phrases) - 1] = '\0';                               //sets the last phrase of the input to \0

				if ((strcmp(phrases, "q") != 0)) {                                  // checks if q is intered if not it continues if yes ends the loop
					nextPhrase = strtok(phrases, ",");                              // checks the comma and goes for the next phrase
					phrasesCounter = 1;                                              // sets phrasescounter into 1
					while (nextPhrase) {                                              // loop will continue until there is no other phrase

						printf("Phrase #%d is \'%s\' \n", phrasesCounter++, nextPhrase); //prints out the sentence
						nextPhrase = strtok(NULL, ",");                                    //when there is no phrases left to retrieve, strtok returns NULL
					}
				}
			} while (strcmp(phrases, "q") != 0);                  //checks if string is equal to q is true exits loop
			printf("*** End of Tokenizing Phrases Demo ***\n\n"); //prints out the sentence
			*/


			//v3..

			printf("*** Start of Tokenizing Sentences Demo ***\n");  // prints out the sentence
			char sentences[BUFFER_SIZE];                              //declare the user input ,char variable string and stores it
			char* nextSentence = NULL;                                // declare a char pointer to check the string until the last sentence
			int sentencesCounter;                                     // declare the int variable to count the number of used input sentences                    

			do {                                                     // infinite do loop to seperate and count the sentences until q is entered
				printf("Type a few sentences separated by dot (q - to quit) : \n");//prints out the sentence
				fgets(sentences, BUFFER_SIZE, stdin);               //gets the input sentences from user and stores them in sentences
				sentences[strlen(sentences) - 1] = '\0';            //sets the last sentence of the input to \0

				if ((strcmp(sentences, "q") != 0)) {                // checks if q is intered if not it continues if yes ends the loop
					nextSentence = strtok(sentences, ".");            // checks the dot and goes for the next sentence
					sentencesCounter = 1;                              // sets sentencescounter into 1

					while (nextSentence) {                               // loop will continue until there is no other sentence
						printf("Senetnce #%d is \'%s\' \n", sentencesCounter++, nextSentence);            //prints out the sentence
						nextSentence = strtok(NULL, ".");                                                 //when there is no sentence left to retrieve, strtok returns NULL
					}
				}
			} while (strcmp(sentences, "q") != 0);                      //checks if string is equal to q is true exits loop
			printf("*** End of Tokenizing Sentences Demo ***\n\n");    //prints out the sentence
}
