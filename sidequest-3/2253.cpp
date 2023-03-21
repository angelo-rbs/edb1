#include <iostream>
#include <sstream>
#include <cctype>

bool respeitaSeguranca(std::string s) {

  bool maiscula, minuscula, numero;
  maiscula = minuscula = numero = false;

  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) maiscula = true;
    if (islower(s[i])) minuscula = true;
    if (isdigit(s[i])) numero = true;
  }

  return (maiscula && minuscula && numero);
}

bool respeitaTamanho(std::string s) {
  return (s.size() >= 6 && s.size() <= 32);
}

bool temCaractereEstranho(std::string s) {

  for (int i = 0; i < s.size(); i++) 
    if ((!isalnum(s[i])) || isspace(s[i]) || ispunct(s[i])) return true;
    
  return false;
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string entrada, senha;


  while(getline(std::cin, entrada)) {

    if (respeitaTamanho(entrada) && respeitaSeguranca(entrada) && !temCaractereEstranho(entrada))
      std::cout << "Senha valida." << std::endl;
    else
      std::cout << "Senha invalida." << std::endl;

  }

}