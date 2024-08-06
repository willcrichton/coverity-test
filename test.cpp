#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  for (auto it = v.begin(); it != v.end(); it++) {    
    if (*it % 2 == 0) {
      v.erase(it);
    }
  }

  return 0;
}