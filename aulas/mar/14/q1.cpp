#include <iostream>

using namespace std;

template <typename T>
T max(T v[], int size) {

  if (v == NULL) throw;

  T max = v[0];
  for (int i = 1; i < size; i++)
    if (v[i] > max) max = v[i];

  return max;
}

int main() {

  int vetorInt[] = { 5, 8, 3, 6, 2, 5, 2, 9, 4, 11 };
  int size = 10;

  cout << max(vetorInt, size);
}