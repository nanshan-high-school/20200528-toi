#include <iostream>
using namespace std;

int main() {
    int a[3],b[2][5],total = 0;
    bool check = false;

    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 2; i++){
        for(int y = 0; y < 5; y++){
            cin >> b[i][y];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int y = 0; y < 5; y++){
            if((i == 0 || i == 1) && a[i] == b[0][y]){
                total += b[1][y];
            }else if(i == 2 && a[i] == b [0][y]){
                check = true;
                total -= b[1][y];
            }
        }
    }
    if(check == false){
        total *= 2;
    }else if(total < 0){
        total = 0;
    }
    cout << total;
}
