#include <iostream>


int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, sum;
  std::string s;
  int ledsPorDigito[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  std::cin >> n;

  while(n--) {

    sum = 0;
    std::cin >> s;

    for (int i = 0; i < s.size(); i++) 
      sum += ledsPorDigito[(int) ((int) s[i]) - '0'];

    std::cout << sum << " leds" << std::endl;
  }

}