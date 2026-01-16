#include <stdio.h>

int main() {
  int c, spaces, tabs;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      spaces++;
  if (c = ' ')
    tabs++;

  printf("%d %d\n", spaces, tabs);

  return 0;
}
