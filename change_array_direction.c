#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUMBERS 5
#define MAX_STRING 20

void change_int_direction(int *num, int length);
void change_char_direction(char *string, int length);

int main(void)
{
    // Initialize arrays to work with
    int numbers[MAX_NUMBERS] = {12,5,9,0,30};

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

    // Change direction of the original array
    change_int_direction(numbers, MAX_NUMBERS);

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



    // Create a string character array; allocate enough memory for the string
    char *string = malloc(MAX_STRING * sizeof(char));

    // Copy the string into the allocated memory
    strncpy(string, "Hello world!", MAX_STRING);

    // Print character array original values
    printf ("Array: %s\n", string);

    // Change direction of the original array
    change_char_direction(string, strlen(string));

    // Print character array original values
    printf ("Array: %s\n", string);

    // Free the allocated memory
    free(string);

    return EXIT_SUCCESS;
}

void change_int_direction(int *num, int length)
{
    // Set pointer to the arrays' last elements' address
    int *end_of_array = num + (length - 1);

    // Swap values until num and end_of_array address is the same or
    // num's address is higher then end_of_array's address
    while (num < end_of_array)
    {
        // Swap the values, don't forget to dereference the pointer to get the
        // values and not the addresses
     
        int temp = *num;
        *num = *end_of_array;
        *end_of_array = temp;

        // Increment num address and decrement end_of_array address
        // Step one by one to the middle of the array
        num++;
        end_of_array--;
    }
}

void change_char_direction(char *string, int length)
{
    // Set pointer to the arrays' last elements' address
    char *end_of_array = string + (length - 1);

    // Swap values until string and end_of_array address is the same or
    // string's address is higher then end_of_array's address
    while (string < end_of_array)
    {
        // Swap the values, don't forget to dereference the pointer to get the
        // values and not the addresses
     
        char temp = *string;
        *string = *end_of_array;
        *end_of_array = temp;

        // Increment string address and decrement end_of_array address
        // Step one by one to the middle of the array
        string++;
        end_of_array--;
    }
}