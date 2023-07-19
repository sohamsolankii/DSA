#include <iostream>
#include <vector>

int main() {
  std::vector<int> a = {1, 2, 3, 4, 5};
  std::cout << "Before erase: ";
  for (auto i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  a.erase(a.begin() + 0);

  std::cout << "After erase: ";
  for (auto i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}

/// reverse vector

#define allr(x) x.rbegin(),x.rend()
#define allr(x) x.rbegin(),x.rend(),greater<int>()