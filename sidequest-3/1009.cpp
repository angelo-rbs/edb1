#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  string nome;
  double fixo, total_vendas, salario_final;

  cin >> nome >> fixo >> total_vendas;
  salario_final = fixo + 0.15*total_vendas;

  printf("TOTAL = R$ %.2f\n", salario_final);

}