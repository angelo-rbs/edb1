#include <iostream>
#include <vector>

template <typename T>
void sort(std::vector<T>& v) {

  bool modificou = true;
  int j;

  while (modificou) {
    modificou = false;

    for (int i = 1; i < v.size(); i++) {
      if (v[i-1] > v[i]) {
        j = i;
        while (j > 0 && v[j-1] > v[j]) {
          std::swap(v[j-1], v[j]);
          --j;
        }
        modificou = true;
      }
    }
  }
}

template <typename T>
void printVector(std::vector<T>& v) {

  if (!v.empty()) {

      std::cout << v[0];

      for (int i = 1; i < v.size(); i++)
        std::cout << std::endl << v[i];
  }

  std::cout << std::endl;
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int a, b, c;
  std::cin >> a >> b >> c;

  std::vector<int> original = {a, b, c};
  std::vector<int> sorted(original);

  sort(sorted);  
  
  printVector(sorted);
  std::cout << std::endl;

  printVector(original); 

}