#include <iostream>
using namespace std;

int main() {
  int a[3], b[5], c[5];

  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < 5; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < 5; i++) {
    cin >> c[i];
  }
  
  int total = 0;
  int add;

  for (int i = 0; i < 5; i++) {
    if (a[0] == b[i]) {
      total += c[i];
    }
  }

  for (int i = 0; i < 5; i++) {
    if (a[1] == b[i]) {
      total += c[i];
    }
  }

  add = total;

  for (int i = 0; i < 5; i++) {
    if (a[2] == b[i]) {
      total -= c[i];
    }
  }

  if (total < 0) {
    total = 0;
  }

  if (add == total) {
    total *= 2;
  }

  cout << total;
}
