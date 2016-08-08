#include <stdio.h>

int main() {
  int n, m;
  char acao[7];
  scanf("%d %d", &n, &m);
  while (m--) {
    scanf("%s", acao);
    if (acao[0] == 'c') {
      n--;
    } else {
      n++;
    }
  }
  printf("%d\n", n);
  return 0;
}
