#include <stdio.h>
#include <string.h>

// Function to reverse the string
// using pointers
void reverseString(char *msg)
{
    int l = strlen(msg);

    // Set the input_msg and rev_msg
    // initially to start of string
    char *input_msg, *rev_msg;
    input_msg = msg;
    rev_msg = msg;

    // Move the rev_msg to the last character
    rev_msg += l - 1;

    // Swap the char from start and end
    // index using input_msg and rev_msg
    char temp;
    for (int i = 0; i < l / 2; i++)
    {
        // swap character
        temp = *rev_msg;
        *rev_msg = *input_msg;
        *input_msg = temp;
        // update pointers positions
        input_msg++;
        rev_msg--;
    }
}

int main()
{
    char msg[9999];
    printf("Enter a message: ");
    gets(msg);

    reverseString(msg);

    printf("Reversal is: %s\n", msg);

    return 0;
}