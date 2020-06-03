#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int s[n];
    int tmp , a = 0;
    bool check = false;
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    for (int i = 0; i < n; i++){
        if (s[i] == 1){
            check = true;
        }
        else if (s[i] == 0 && check == true && i != n - 1){
            tmp += 1;
            cout << "tmp =" << tmp << "\n";
            a = tmp;
        }
        else if (s[i] == 9){
            if (s[i - 1] == 0 && tmp > 0){
                tmp--;
            }
            if (s[i + 1] == 0){
                tmp--;
            }
            check = false;
        }
        else if (s[i] == 1 && check == true && i != 0){
            check = false;
        }
    }
    cout << a;
}
// лс