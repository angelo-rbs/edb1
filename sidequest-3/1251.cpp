#include <iostream>

#include <algorithm>
#include <utility>
#include <vector>


int buscaOcorrenciaRegistrada(char c, std::vector<std::pair<char, int>>& v) {

  if (v.empty()) return -1;


  int posicaoPar = 0;
  std::pair<char, int> par;

  while( posicaoPar < v.size()) {

    par = v[posicaoPar];
    if (par.first == c) return posicaoPar;

    posicaoPar++;
  }

  return -1;
}
  
void registraOcorrencia(char c, std::vector<std::pair<char, int>>& v) {  

  int posOcorrencia = buscaOcorrenciaRegistrada(c, v);

  if (posOcorrencia >= 0) (v[posOcorrencia].second) += 1;

}

bool comparaParesDeFrequencia(std::pair<char, int> a, std::pair<char, int>& b) {
  
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first > b.first;
  }
}

void processaProximaCadeia(std::string entrada, std::vector<std::pair<char, int>> registrosDeCaractere) {
  // registra a frequência de cada caractere como um par (caractere, frequencia) 

    for (int i = 0; i < entrada.length(); i++) {

      char caractere = entrada[i];
      int posOcorrencia = buscaOcorrenciaRegistrada(caractere, registrosDeCaractere);
      int existeOcorrencia = (posOcorrencia != -1);
      

      if (!existeOcorrencia)
        registrosDeCaractere.push_back(std::make_pair(caractere, 1));
      else {
        registraOcorrencia(caractere, registrosDeCaractere);
      }
    }

    // ordena os pares do vetor em ordem crescente de frequência ou do correspondente da tabela ASCII  

    std::sort(registrosDeCaractere.begin(), registrosDeCaractere.end(), comparaParesDeFrequencia);

    // printa

    std::pair<char, int> par;

    if (!registrosDeCaractere.empty()) {
      par = registrosDeCaractere[0];
      std::cout << (int) par.first << " " << par.second;
    }

    for (int i = 1; i < registrosDeCaractere.size(); i++) {
      par = registrosDeCaractere[i];
      std::cout << std::endl << (int) par.first << " " << par.second;
    }

    registrosDeCaractere.clear();
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string entrada;
  std::vector< std::pair<char, int> > registrosDeCaractere;


  std::cin >> entrada;
  processaProximaCadeia(entrada, registrosDeCaractere);

  while (std::cin >> entrada) {

    std::cout << std::endl << std::endl;
    processaProximaCadeia(entrada, registrosDeCaractere);
  }

  std::cout << std::endl;
}