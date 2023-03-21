#include <iostream>


int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int x1, y1, x2, y2;
  
  while (std::cin >> x1 && (x1 != 0)) {

    std::cin >> y1 >> x2 >> y2;

    if (x1 == x2 && y1 == y2)
      std::cout << 0;
    else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
      std::cout << 1;
    else 
      std::cout << 2;

    std::cout << std::endl;
  }

}