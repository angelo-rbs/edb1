#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  double x1, y1, x2, y2, dist;
  cin >> x1 >> y1 >> x2 >> y2;

  dist = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2));
  printf("%.4f\n", dist);

}