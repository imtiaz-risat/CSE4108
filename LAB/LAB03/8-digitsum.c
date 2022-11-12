#include <stdio.h>

int main()
{
  int x;

  printf("Enter a five-digit integer: ");
  scanf("%d", &x);

  int a, b, c, d, e, f, g, h;

  a = x / 10000;
  b = x % 10000;
  c = b / 1000;
  d = b % 1000;
  e = d / 100;
  f = d % 100;
  g = f / 10;
  h = f % 10;

  int sum = a + c + e + g + h;

  printf("The sum is %d", sum);

  return 0;
}
