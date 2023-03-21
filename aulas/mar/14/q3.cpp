#include <iostream>

using namespace std;

template <typename T>
bool find(T v[], T element, int size) {
  for (int i = 0; i < size; i++)
    if (v[i] == element) return true;

  return false;
}

int main() {

  string v[] = {"banana", "maçã", "uva", "pera", "salada"};
  string e = "bananaaa";

  cout << find(v, e, 5 );

  return 0;
}
