#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int space[N];

  for (int i = 0; i < N; i++) {
    cin >> space[i];
  }

  int flower = 0;

  for (int i = 1; i < N - 1; i++){
    if (space[i] == 0) {
      if (space[i - 1] != 9) {
        if (space[i + 1] != 9) {
          for (int j = 0; j < i; j++) {
            if (space[j] == 1) {
              for (int k = i + 1; k < N; k++) {
                if (space[k] == 1) {
                  flower += 1;
                  break;
                }
              }
              break;
            }
          }
        }
      }
    }
  }

  cout << flower;
}
