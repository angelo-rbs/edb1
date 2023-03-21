#include <iostream>

using namespace std;

template <typename T>
T *sum_pointwise(T *ptr1, T *ptr2, int size) {
  
  T* ptr3 = (T*) malloc(sizeof(T) * size);

  for (int i = 0; i < size; i++)
    ptr3[i] = ptr1[i] + ptr2[i];

  return ptr3;
}

int main() {

  int v1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int v2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};

  auto v3 = sum_pointwise(v1, v2, 9);

  cout << "[ ";
  for (int i = 0; i < 9; i++)
    cout << v3[i] << " ";
  cout << "]" << endl;


  return 0;
}