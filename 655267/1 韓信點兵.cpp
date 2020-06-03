#include <iostream>
using namespace std;

int main() {
    int answer = 0,a[3],b[3],num = 0;

    for(int i = 0; i < 3; i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i <= 2000000; i++){
        if(i % a[0] == b[0] && i % a[1] == b[1] && i % a[2] == b[2]){
            answer = i;
            break;
        }
    }
    cout << answer;
}
