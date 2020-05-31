#include <iostream>
using namespace std;

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    bool right = true;
    for (long int i = 1; i < 2000000; i++) {
        right = true;
        for (int j = 0; j < 3; j++) {
            if (i % a[j] != b[j]) {
                right = false;
            }
        }
        if (right) {
            cout << i;
            break;
        }
    }
}