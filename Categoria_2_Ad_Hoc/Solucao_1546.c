#include <stdio.h>

int main() {
  int n, k, num;
  scanf("%d", &n);

  while (n--) {
    scanf("%d", &k);
    while (k--) {
      scanf("%d", &num);

      switch (num) {
        case 1:
          printf("Rolien\n");
          break;
        case 2:
          printf("Naej\n");
          break;
        case 3:
          printf("Elehcim\n");
          break;
        case 4:
          printf("Odranoel\n");
          break;
      }

    }
  }
  return 0;
}
