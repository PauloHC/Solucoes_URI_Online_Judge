#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int N, Q, num, caso = 1;
  while (scanf("%d %d", &N, &Q) != EOF) {
    if ((N == 0) && (Q == 0)) {
      break;
    }
    printf("CASE# %d:\n", caso);
    int mrb[N];

    for (int i = 0; i < N; i++) {
      scanf("%d", &mrb[i]);
    }

    sort(mrb, mrb + N);

    for (int i = 0; i < Q; i++) {
      scanf("%d", &num);
      if (!binary_search(mrb, mrb + N, num)) {
        printf("%d not found\n", num);
      } else {
        int* pos = lower_bound(mrb, mrb + N, num);
        printf("%d found at %d\n", num, (pos - mrb) + 1);
      }
    }

    caso++;
  }
  return 0;
}
