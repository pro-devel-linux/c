#include <stdio.h>
#include "stdlib.h"

// for compiling on windows I use fputs and gets since windows already using arrow editing
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

// fake readline function
char* readline(char* prompt) {
	fputs(prompt, stdout);
	fgest(buffer, 2048, stdin);
	char* cpy = malloc(strlen(buffer)+1);
	cpy[strlen(cpy)-1] = '\0';
	return cpy;
}

// fake add history function
void add_history(char* unused) {}

//otherwise compling on mac or linux include readline library.
#else
#include "editline/readline.h"
#include "editline/history.h"
#endif

int main(int argc, char** argv) {
  
	// print version and exit information
	float ver = 0.2;
	printf("SHD version %.1f \n",ver);
	puts("Press ctrl+c to Exit\n");

	// In a never ending loop
	while (1) {
		// output a prompt then get input again
		char* input = readline("SHD> ");

		//  user enteries are now stored & can calledback with arrows
		add_history(input);

		// echo input back to user
		printf("No you're a %s\n", input);

		// free retrieved input
		free(input);
	}
	
  return 0;
}
