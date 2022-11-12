#include <stdio.h>
int main()
{
    char fname[99], lname[99];
    printf("Enter a first and last name: ");
    scanf("%s %s", fname, lname);
    printf("%s, %c.", lname, fname[0]);

    return 0;
}
