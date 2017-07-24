#include <stdio.h>

/* Declare a buffer size of 2048 bit */
static char input[2048];

int main(int argc, char** argv) {
  
	// print version and exit information
	puts("Lispy version 0.0.0.1");
	puts("Press ctrl+c to Exit\n");

	// In a never ending loop
	while (1) {
		// output a prompt then get input again
		fputs("lispy> ", stdout);

		// read a line of user input max of 2048
		fgets(input, 2048, stdin);

		// echo input back to user
		printf("No you're a %s", input);
	}
	
  return 0;
}
