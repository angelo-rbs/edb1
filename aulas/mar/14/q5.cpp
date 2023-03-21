#include <iostream>

using namespace std;

template <typename T>
void print_matriz(int sizei, int sizej, T* m) {

  for (int j = 0; j < sizej; j++) {
    for (int i = 0; i < sizei; i++) {
        cout << " " << m[i][j];
    }

    cout << endl;
  }
}

int main() 
{

  int v[][3] = {{1, 2, 3}, 
                {4, 5, 6}};

  print_matriz(2, 3, v);

  return 0;
}