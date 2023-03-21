#include <iostream>


int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int l, c;
  std::cin >> l >> c;

  std::cout << !((l+c)%2) << std::endl; 
}