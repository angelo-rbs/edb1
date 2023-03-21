#include <iostream>

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int v[20];
  int aux;
  
  for (int i = 0; i < 20; i++)
    std::cin >> v[i];

  for (int i = 0; i < 10; i++) {
    aux = v[i];
    v[i] = v[19 - i];
    v[19 - i] = aux;
  }

  for (int i = 0; i < 20; i++)
    printf("N[%d] = %d\n", i, v[i]);

}