#include <iostream>
#define MATRIZ_ISIZE 12
#define MATRIZ_JSIZE 12


template <typename T>
void printaMatriz(T m[MATRIZ_ISIZE][MATRIZ_JSIZE]) {

  for (int i = 0; i < MATRIZ_ISIZE; i++) {
    for (int j = 0; j < MATRIZ_JSIZE; j++) {
      std::cout << m[i][j] << " ";
    }
    
    std::cout << std::endl;
  }
}

double calculaSomaDaSecao(double m[MATRIZ_ISIZE][MATRIZ_JSIZE]) {

  double ans = 0;

  for (int i = 0; i < (MATRIZ_ISIZE / 2) - 1; i++) {
    for (int j = i + 1; j <= MATRIZ_JSIZE - (i + 2); j++) ans += m[i][j];
  }

  return ans;
}

double calculaMediaDaSecao(double m[MATRIZ_ISIZE][MATRIZ_JSIZE]) {
  return calculaSomaDaSecao(m)/ ((MATRIZ_ISIZE * MATRIZ_JSIZE - MATRIZ_ISIZE - MATRIZ_JSIZE)/4);
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string op;
  double matriz[MATRIZ_ISIZE][MATRIZ_JSIZE];
  double ans;

  std::cin >> op;

  for (int i = 0; i < MATRIZ_ISIZE; i++) {
    for (int j = 0; j < MATRIZ_JSIZE; j++) std::cin >> matriz[i][j];
  }


  if (op == "S")
    ans = calculaSomaDaSecao(matriz);
  else if (op == "M")
    ans = calculaMediaDaSecao(matriz);

  printf("%.1f\n", ans);

}