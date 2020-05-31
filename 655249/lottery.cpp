#include <iostream>
using namespace std;

int main() {
    int input[3];
    for (int i = 0; i < 3; i++) {
        cin >> input[i];
    }
    
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int b[5];
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }

    int price = 0;
    bool last = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[j] == input[i]) {
                if (i != 2) {
                    price += b[j];
                } else {
                    price -= b[j];
                    last = false;
                }
            }
        }
    }

    if (last) {
        price *= 2;
    }
    if (price < 0) {
        price = 0;
    }
    cout << price;
}