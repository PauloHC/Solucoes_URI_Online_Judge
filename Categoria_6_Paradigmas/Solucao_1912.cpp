// c++11

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
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
  cout << fixed << setprecision(4);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n_tiras;
  double area, soma, inf, meio, sup, res;

  while (cin >> n_tiras >> area) {

    if ((n_tiras == 0) && (area == 0)) {
      break;
    }

    vector<int> tiras(n_tiras);
    soma = 0.0;

    for (int i = 0; i < n_tiras; ++i) {
      cin >> tiras[i];
      soma += tiras[i];
    }

    if (fabs(soma - area)  < 1e-5) {
      cout << ":D\n";
      continue;
    }

    else if (soma < area) {
      cout << "-.-\n";
      continue;
    }

    else {
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

      cout << meio << '\n';
    }

  }
  return 0;
}
