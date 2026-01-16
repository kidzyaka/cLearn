#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    printf("test \n");
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("слов: %d символов: %d строки: %d \n", nw, nc, nl);

  return 0;
}
