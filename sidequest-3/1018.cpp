#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int valor, max_notas_por_cedula;
  int valores_de_cedula[] = {100, 50, 20, 10, 5, 2, 1};
  int SIZE_CEDULAS = 7;

  cin >> valor;
  cout << valor << endl;

  for (int i = 0; i < SIZE_CEDULAS; i++) {

    max_notas_por_cedula = valor / valores_de_cedula[i];
    printf("%d nota(s) de R$ %d,00\n", max_notas_por_cedula, valores_de_cedula[i]);

    if (max_notas_por_cedula > 0) valor %= valores_de_cedula[i];
  }
}