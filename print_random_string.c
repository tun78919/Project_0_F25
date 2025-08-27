#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
    // Allocates memory on the heap. +1 malloc for the null character after the string
     char *s = malloc(size + 1);
     if (s) {
        // Pointer is passed by value as parameter but points to same memory.
        rand_string(s, size);
     }
     return s;
    /* Malloc allows the pointer s memory to be returned to the original file.
    While passing the pointer as a parameter allows us to make changes to the
    pointer s in a separate file. */
}



int main()

{
    char *str;
    size_t size = 8;  //specify a value for size of word

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size);
    printf("%s",str);
    free (str);
    

	return(0);
}