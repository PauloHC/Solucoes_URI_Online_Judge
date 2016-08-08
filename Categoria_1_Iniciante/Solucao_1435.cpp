#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int n;
  while (scanf("%d", &n) && n != 0) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
          printf("%3d%s", min(min(j, n-j+1), min(i, n-i+1)), j < n ? " " : "");
      }
      puts("");
    }
    puts("");
  }
  return 0;
}
