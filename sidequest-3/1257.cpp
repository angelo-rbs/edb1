#include <iostream>


int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, l, sum, i, j;
  std::string linha;
  std::cin >> n;


  while (n--) {
    sum = 0;
    i = 0;
    std::cin >> l;

    while (i < l) {

      std::cin >> linha;
      j = 0;
      while(j < linha.size()) {

        sum += (linha[j] - 'A') + j;
        j++;
      }

      sum += i * linha.size();
      i++;
    }

    std::cout << sum << std::endl;
  }

  
}