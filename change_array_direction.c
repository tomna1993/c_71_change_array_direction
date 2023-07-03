#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUMBERS 5
#define MAX_STRING 20

int main(void)
{
    // Initialize arrays to work with
    int numbers[MAX_NUMBERS] = {12,5,9,0,30};

    // Create a string character array; allocate enough memory for the string
    char *string = malloc(MAX_STRING * sizeof(char));

    // Copy the string into the allocated memory
    strncpy(string, "Hello world!", MAX_STRING);

    // Print numbers array original values
    printf ("Array: [");
    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        if (i == 0)
        {
            printf ("%i", numbers[i]);
            continue;
        }
        
        printf (", %i", numbers[i]);
    }
    printf ("]\n");

    // Print character array original values
    printf ("Array: %s\n", string);

    // Free the allocated memory
    free(string);

    return EXIT_SUCCESS;
}