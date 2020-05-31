#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int G[N];
    for (int i = 0; i < N; i++) {
        cin >> G[i]; 
    }
    for (int i = 0; i < N; i++) {
        if (G[i] == 0) {
            G[i] = 1;
        } else {
            break;
        }
    }
    for (int i = N; i > 0; i--) {
        if (G[i-1] == 0) {
            G[i-1] = 1;
        } else {
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        if (G[i] == 9) {
            G[i] = 1;
            if (i != 0 && i != (N - 1)) {
                G[i - 1] = 1;
                G[i + 1] = 1;
            } else if (i == 0) {
                G[i + 1] = 1;
            } else if (i == (N - 1)) {
                G[i - 1] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (G[i] == 0) {
            ans++;
        }
    }
    cout << ans;
}