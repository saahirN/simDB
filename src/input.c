#include "input.h"
#include <stdio.h>
#include <stdlib.h> 

// create a new input buffer
Input *new_input () {
    Input *input = calloc(sizeof(Input), 1);
    input->buffer_len = 0;
    input->input_len = 1; 
    input->buffer = ""; 
}

// free memory used by input buff
void delete_input(Input *input) {
    free(input->buffer);
    free(input);  
}

void read_input(Input *input) {
    printf("> ");
    int len = getline(&(input->buffer), &(input->buffer_len), stdin);
    if(len == 0) {
        exit(EXIT_FAILURE); 
    } 

    input->input_len = len - 1; 
}