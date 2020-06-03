#include <iostream>
using namespace std;

int main() {
    int a[3] = {0};
    int b[3] = {0};
    for (int i = 0; i < 3; i++){
        cin >> a[i] >> b[i];
    }

    int s = 0;
    int i = 1;
    while (i < 2 * 1000000){
        if (i % a[0] == b[0] && i % a[1] == b[1] && i % a[2] == b[2]){
            s = i;
            break;
        }
        i++;
    }
    cout << s;
}