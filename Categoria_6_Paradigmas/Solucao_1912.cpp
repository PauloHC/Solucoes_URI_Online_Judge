// c++11
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

double calc_area(vector<int> &tiras, double corte) {
  double res = 0.0;
  for (auto tira : tiras) {
    if (tira > corte) {
      res += tira - corte;
    }
  }
  return res;
}

int main() {
  int n, num;
  double area, soma, inf, meio, sup, res;
  vector<int> tiras;

  while (scanf("%d %lf", &n, &area)) {

    if (n == 0 && area == 0) {
      break;
    }

    tiras.clear();
    soma = 0.0;

    for (int i = 0; i < n; ++i) {
      scanf("%d", &num);
      soma += num;
      tiras.push_back(num);
    }

    if (fabs(soma - area)  < 1e-5) {
      printf(":D\n");
      continue;
    } else if (soma < area) {
      printf("-.-\n");
      continue;
    } else {
      inf = 0.0;
      sup = *max_element(tiras.begin(), tiras.end());

      while (true) {
        meio = (inf + sup)/2.0;
        res = calc_area(tiras, meio);

        if (fabs(res - area) < 1e-5) {
          break;
        } else if (area < res) {
          inf = meio;
        } else {
          sup = meio;
        }

      }
      printf("%.4f\n", meio);
    }

  }
  return 0;
}
