#include <cstdio>
#include <set>

using namespace std;

int main() {
  set<int> borb;
  int n, x, y;

  scanf("%d", &n);

  int frt[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &frt[i][j]);
    }
  }

  for (int i = 0; i < n*2; i++) {
    scanf("%d %d", &x, &y);
    borb.insert(frt[x-1][y-1]);
  }

  printf("%d\n", borb.size());
  return 0;
}
