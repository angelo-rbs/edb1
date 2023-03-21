#include <iostream>
using namespace std;

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int x, y, sum = 0;
  cin >> x >> y;

  if (x > y) swap(x, y);
  x = (x%2) ? (x+2) : (x+1);

  for (int i = x; i < y; i += 2)
    sum += i;

  std::cout << sum << std::endl; 

}