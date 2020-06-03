#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x[6] = {0};
    for(int i = 0; i < 6; i++){
        cin >> x[i];
    }
    for(int i = 1; i < pow(2*10,6); i++){
        if(i % x[0] == x[1] && i % x[2] == 
           x[3] && i % x[4] == x[5]){
               cout << i;
               break;
           }
    }
}
