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

double calculaSomaMetadeInferior(double m[MATRIZ_ISIZE][MATRIZ_JSIZE]) {

  double ans = 0;

  for (int i = 1; i < MATRIZ_ISIZE; i++) {
    for (int j = MATRIZ_JSIZE - i; j < MATRIZ_JSIZE; j++) ans += m[i][j];
  }

  return ans;
}

double calculaMediaMetadeInferior(double m[MATRIZ_ISIZE][MATRIZ_JSIZE]) {
  return calculaSomaMetadeInferior(m)/((MATRIZ_ISIZE * MATRIZ_JSIZE - MATRIZ_JSIZE) / 2);
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
    ans = calculaSomaMetadeInferior(matriz);
  else if (op == "M")
    ans = calculaMediaMetadeInferior(matriz);

  printf("%.1f\n", ans);

}