#include <stdio.h>
int main()
{
    // OCTAL ESCAPE: \any_octal_value
    // HEXADECIMAL ESCAPE: \any_hexadecimal_value

    printf("ABC\77XYZ\n");
    // Here \77 will print a '?' because
    // Octal(77) = Decimal(63)
    // ASCII value 63 = '?'
    printf("ABC\106XYZ\n");
    // Here \106 will print a 'F' because
    // Octal(106) = Decimal(70)
    // ASCII value 70 = 'D'

    // WHAT DOES ESCAPE DO....⭐⭐⭐
    printf("ABC\33    r -  XYZ\n");
    // Octal(33) = Decimal(27)
    // ASCII value 27 = ESCAPE
    // ESCAPE causes the next char along with spaces to be skipped
    // Ekhane ABC er porer space gula skip hbe and immediate next character 'r' o skip hbe
    // So it will print ABC -  XYZ
    printf("ABC\x1B\n        XYZ\n"); // to use HEXA must use /x*** (x as prefix)
    // Hexa(1B) = Decimal(27)
    // ASCII value 27 = ESCAPE
    // It doesn't skips the next line ⭐
    // It only skips the very next character and the spaces before that character

    return 0;
}
