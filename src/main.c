#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
#include "input.h"

int main(int argc, char *argv[]) {
    Input *input = new_input(); 
    while(strncmp(input->buffer, "q", input->input_len) != 0) {
        read_input(input);
        printf("%s", input->buffer);  
    }    
    return EXIT_SUCCESS; 
}
 