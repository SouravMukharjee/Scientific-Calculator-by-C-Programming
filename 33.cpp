#include <stdio.h>
int main()
{
  int a, b, x, y, t,lcm;

  printf("Enter two value:");
  scanf("%d%d", &i, &j);

  x = i;
  y = j;

  while (y != 0)
    {
        t = y;
        y = x % y;
        x = t;
    }
  lcm = (i*j)/x;
  printf("%d",lcm);
  return 0;
}
