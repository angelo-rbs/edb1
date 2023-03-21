#include <iostream>
#include <sstream>
#include <cctype>

bool ehTautograma(std::string s){

  std::string palavra;
  char inicialAnterior;

  std::istringstream fluxo(s);

    inicialAnterior = (char) 0;

    while (fluxo >> palavra) {

        if (inicialAnterior == 0) inicialAnterior = tolower(palavra[0]);
        if (inicialAnterior != 0 && tolower(palavra[0]) != inicialAnterior) return false;
    }
  
    return true;
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string entrada;
  
  while(getline(std::cin >> std::ws, entrada)) {

    if (entrada == "*") break;
    
    if (ehTautograma(entrada))
      std::cout << "Y";
    else
      std::cout << "N";

    std:: cout << std::endl; 

  }

}