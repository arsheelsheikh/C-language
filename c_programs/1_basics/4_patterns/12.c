/*Pattern 12

1        1
12      21
123    321
1234  4321
1234554321
*/

#include <stdio.h>

int main()
{
  int n, x, y, k;

  printf("Enter the number : ");
  scanf("%d", &n);

  for (x = 1; x <= n; x++)
  {
    for (y = 1; y <= n; y++)
    {
      if (y <= x)
        printf("%d", y);
      else
        printf(" ");
    }
    for (y = n; y >= 1; y--)
    {
      if (y <= x)
        printf("%d", y);
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}