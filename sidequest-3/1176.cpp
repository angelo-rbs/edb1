#include <iostream>
#include <vector>

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int maxCalculado = 1, t, n;
  std::vector<unsigned long long> fibo = {0, 1};
  std::cin >> t;

  while (t--) {

    std::cin >> n;

    while (maxCalculado < n) {

      fibo.push_back(fibo[maxCalculado] + fibo[maxCalculado - 1]);
      ++maxCalculado;
    }

    printf("Fib(%d) = %lld\n", n, fibo[n]);
  }

}