#include <stdio.h>

int main() {
  int hora, minuto, atraso;
  while (scanf("%d:%d", &hora, &minuto) != EOF) {
    atraso = 0;
    if (hora >= 7) {
      atraso = 60*(hora - 7) + minuto;
    }
    printf("Atraso maximo: %d\n", atraso);
  }
  return 0;
}
