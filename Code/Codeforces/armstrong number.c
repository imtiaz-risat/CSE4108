#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

       result = result + remainder * remainder * remainder;

       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    printf("num %d\n", &num);
    printf("originalNum %d\n", &originalNum);
    printf("remainder %d\n", &remainder);
    printf("result %d\n", &result);


    return 0;
}
