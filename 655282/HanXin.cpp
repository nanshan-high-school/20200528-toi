#include <iostream>
using namespace std;

int main() {
  int a[3], b[3];
  cin >> a[0];
  cin >> b[0];
  cin >> a[1];
  cin >> b[1];
  cin >> a[2];
  cin >> b[2];

  int total = 1;
  while (true) {
    if (total % a[0] == b[0]) {
      if (total % a[1] == b[1]) {
        if (total % a[2] == b[2]) {
          break;
        }
      }
    }
    total++;
  }

  cout << total;
}
