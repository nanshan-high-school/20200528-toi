#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int garden[n];
    for (int i = 0; i < n; i++) {
        cin >> garden[i];
    }

    for (int i = 0; i < n; i++) {
        if (garden[i] != 1) {
            garden[i] = 1;
        } else {
            break;
        }
    }

    for (int i = n; i > 0; i--) {
        if (garden[i] != 1) {
            garden[i] = 1;
        } else {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if ((garden[i] == 0) && (garden[i - 1] == 9 || garden[i + 1] == 9)) {
            garden[i] = 1;
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (garden[i] == 0) {
            answer++;
        }
    }

    cout << answer;
}