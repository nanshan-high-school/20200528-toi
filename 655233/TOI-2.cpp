#include <iostream>
using namespace std;

int main() {
    int a[3], b[5], c[5];
    int total = 0;
    bool wow = false;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 5; i++) {
        cin >> c[i];
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                total += c[j];
            }
        }
    }
    for (int j = 0; j < 5; j++) {
        if (a[2] == b[j]) {
            total -= c[j];
            if (total < 0) {
                total = 0;
            }
            wow = true; 
        }
    }
    if (wow == false) {
        total *= 2;
    }
    cout << total;
}
