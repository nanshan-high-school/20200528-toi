#include <iostream>
using namespace std;

int main() {
    int n,min,max,ans = 0;
    bool check = false;

    cin >> n;

    int land[n];

    for(int i = 0; i < n; i++){
        cin >> land[i];
    }

    for(int i = 0; i < n; i++){
        if(land[i] == 1){
            if(check == false){
                check = true;
                min = i;
            }
            max = i;
        }
    }

    for(int i = min; i <= max; i++){
        if(land[i] == 0){
            ans++;
        }else if(land[i] == 9){
            if(land[i - 1] == 0){
                ans -= 1;
            }
            if(land[i + 1] == 0){
                ans -= 1;
            }
        }
    }
    cout << ans;
}
