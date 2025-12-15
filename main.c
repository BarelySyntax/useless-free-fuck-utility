#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char *phrases[];
extern size_t num_elements_phrases;

int main( int argc, char *argv[] ) {
	srand(time(NULL));
	
    int random_index = rand() % num_elements_phrases;
    char *selection = phrases[random_index];
	
  	if (argc == 2) {
    	printf("%s %s.\n", argv[1], selection);
        return 0;
   	} else if (argc > 2) {
    	printf("Too many arguments supplied.\n");
    } else {
    	printf("One argument expected.\n");
    }
   return 1;
}
