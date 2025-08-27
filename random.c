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
    for (size_t i = 0; i < size; i++){
        s[i] = rand() % (90 - 65 + 1) + 65;
    }
    // Append null terminator to end of string
    s[size] = '\0';
}