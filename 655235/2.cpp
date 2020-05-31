#include <iostream>
using namespace std;

int main() {
    int lucky[3];
    int a[5];
    int b[5];

    for (int i = 0; i < 3; i++) {
        cin >> lucky[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }

    int prize = 0;
    bool three = false;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            if (lucky[0] == a[i]) {
                prize += b[i];
            } else if (lucky[1] == a[i]) {
                prize += b[i];
            } else if (lucky[2] == a[i]) {
                prize -= b[i];
                bool three = true;
            }
        }
    }

    if (prize <= 0) {
        prize = 0;
    }
    if (three == false) {
        prize *= 2;
    }

    cout << prize;
}