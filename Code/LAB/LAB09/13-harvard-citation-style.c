#include <stdio.h>

int main()
{
    char firstname[21], lastname[21];
    printf("Enter a first and last name: ");
    scanf("%s %s", firstname, lastname);

    printf("%s, %c", lastname, firstname[0]);

    return 0;
}