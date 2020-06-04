#include <iostream>
using namespace std;

int main() {
    int num[3];
    int A[5];
    int B[5];
    bool x = true;

    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < 5; j++) {
        cin >> B[j];
    }

    int total = 0;
    bool result = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (num[i] == A[j]) {
                total += B[j];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (num[2] == A[i]) {
            result = false;
            total -= B[i];
        }
    }

    if (result == true) {
        total *= 2;
    }

    if (total < 0) {
        total = 0;
        cout << total;
    } else {
        cout << total;
    }

}