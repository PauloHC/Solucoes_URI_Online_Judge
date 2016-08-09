#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n, num, ini, fim, pos1, pos2;
  vector<int> caixas;

  while (scanf("%d", &n) != EOF) {
    caixas.clear();

    while (n--) {
      scanf("%d %d", &ini, &fim);
      for( ; ini <= fim; ini++) {
        caixas.push_back(ini);
      }
    }

    sort(caixas.begin(), caixas.end());
    scanf("%d", &num);

    if (!binary_search(caixas.begin(), caixas.end(), num)) {
      printf("%d not found\n", num);
    } else {
      pos1 = lower_bound(caixas.begin(), caixas.end(), num) - caixas.begin();
      pos2 = upper_bound(caixas.begin(), caixas.end(), num) - caixas.begin();
      printf("%d found from %d to %d\n", num, pos1, pos2 - 1);
    }

  }
  return 0;
}
