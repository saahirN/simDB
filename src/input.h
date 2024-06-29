#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    char *buffer;
    size_t buffer_len; 
    size_t input_len; 
} Input; 

Input *new_input (); 
void delete_input(Input *input); 
void read_input(Input *input); 
