#include <iostream>
using namespace std;

int main() {
    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int num = 1;
    int ans= 0;
    while (true) {
        if (num % a[0] == b[0]) {
            if (num % a[1] == b[1]) {
                if (num % a[2] == b[2]) {
                    ans = num;
                    break;
                }
            }
        }
        num++;
    }
    cout << ans;
}