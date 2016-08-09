#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n, q, num, pos, caso = 1;
  vector<int> mrb;
  while (scanf("%d %d", &n, &q)) {

    if (n == 0 && q == 0) {
      break;
    }

    printf("CASE# %d:\n", caso);

    mrb.clear();
    for (int i = 0; i < n; i++) {
      scanf("%d", &num);
      mrb.push_back(num);
    }

    sort(mrb.begin(), mrb.end());

    for (int i = 0; i < q; i++) {
      scanf("%d", &num);
      if (!binary_search(mrb.begin(), mrb.end(), num)) {
        printf("%d not found\n", num);
      } else {
        pos = lower_bound(mrb.begin(), mrb.end(), num) - mrb.begin() + 1;
        printf("%d found at %d\n", num, pos);
      }
    }

    caso++;
  }
  return 0;
}
