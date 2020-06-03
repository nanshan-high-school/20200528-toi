#include <iostream>
using namespace std;

int main() {
    int a[3] = {0};
    int b[5] = {0};
    int c[5] = {0};
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++){
        cin >> b[i];
    }

    for (int i = 0; i < 5; i++){
        cin >> c[i];
    }

    int m = 0;
    int check = 0;
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 5; k++){
            if (a[i] == b[k]){
                m += c[k];
            }
            
            if (a[i] != b[k] && i == 2){
                check = 1;
            }
        }
    }
    if (check == 1){
        m = m * 2;
    }
    cout << m;
}