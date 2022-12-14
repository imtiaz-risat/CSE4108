#include <stdio.h>
int main()
{

    // BACKSPACE = will remove the previous character
    printf("ABC\bGHJ\n");

    // CARRIAGE RETURN = replaces the characters after \r with the initial characters of the current line
    // eta hoilo tor \r er porer letter gula niye ekbare first er letter gular jaygay place kre dey
    printf("ABC\rDE\n");
    // here D is placed in place of A
    // then E is placed in place of B
    // then it is printed as DEC (C is not replaced by anything)

    // HORIZONTAL TAB = enters a tab space in between
    printf("ABC\tGHJ\n");

    // WRITING '' or "" or \? in printf function
    printf("\"ABC\"\n");
    printf("\\ IT IS A BACKSLASH\n");
    printf("What is your question\?");

    return 0;
}
