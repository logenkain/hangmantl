//Hangman

#include <stdio.h>
#include <string.h>
#include <curses.h>
int main() {
	(void) initscr();
	(void) nonl();
	(void) cbreak();
	(void) echo();

	puts("Welcome to hangmanTL!");

	char * dictWords[6]; // Dictionary of words will go in here.
	char * winWord; // The winning word will be added in here.
	char  letter;
	int i;

	//In the future, I want a seperate alphabetical file to use as a dictionary and simply populate dictWords with a for loop.
	dictWords[0] = "cat";
	dictWords[1] = "ball";
	dictWords[2] = "string";
	dictWords[3] = "taco";
	dictWords[4] = "mouse";
  winWord = dictWords[0]; // Will be randomized

	printf("%c\n",winWord[1]);

	for (i=0;i<5;i++){
    printw("guess a letter: ");
	  letter = getch();
    printw("\nYou guessed: %c\n", letter) ;
	}
return 0;
}
