// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void rand_string(char *s, size_t size); 

// Main Function
int main(void){
    return 0;
}

// Function for rand_string()
void rand_string(char *s, size_t size){
    // Fills memory pointer s
    for (int i = 0; i < size; i++){
        *s += rand() % (90 - 65 + 1) + 65;
        //*random_char += random_val;
        //printf("%c", val);
        //return char rand() % (90 - 65 + 1) + 65;
    }
    return *s;
}