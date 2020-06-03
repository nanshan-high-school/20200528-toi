#include <iostream>
using namespace std;

int main() {
    int ppl = 0;
    int count[3], left[3];
    bool end = 0;
    for(int i = 0; i < 3; i++){
        cin >> count[i] >> left[i];
    }
    while(end == 0){
        if((ppl - left[0]) % count[0] != 0){
            ppl++;
        }
        else if((ppl - left[1]) % count[1] != 0){
            ppl++;
        }
        else if((ppl - left[2]) % count[2] != 0){
            ppl++;
        }
        else{
            cout << ppl;
            end = 1;
        }
    }
}
