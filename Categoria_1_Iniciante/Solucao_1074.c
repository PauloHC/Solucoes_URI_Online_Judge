#include <stdio.h>

int main() {
  int n, x;
  scanf("%d", &n);
  while (n--) {
    scanf("%d", &x);

    if (x == 0) {
      printf("NULL\n");
    } else if (x > 0 && x % 2 == 0) {
      printf("EVEN POSITIVE\n");
    } else if (x < 0 && x % 2 == 0) {
      printf("EVEN NEGATIVE\n");
    } else if (x > 0 && x % 2 == 1) {
      printf("ODD POSITIVE\n");
    } else {
      printf("ODD NEGATIVE\n");
    }

  }
}
