#include <iostream>
using namespace std;
int main() {
    int num = 0;
    char thing[25] = {0};
    int times = 0;
    int times2 = 0;
    int test;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> thing[i];
    }

    for(int i = 0; i < num; i++){
        if(thing[i] == '1'){
            break;
        }
        times++;

    }

    //cout << times << "\n";
    for(int i = num; i > times; i--){
        if(thing[i - 1] == '1'){
            break;
        }
        times2++;
    }
    times2++;
    times2 = num -times2;
    //cout << times2;
    for(int i = times; i < times2; i++){
        if(thing[i] == '9'){
            thing[i - 1] = 1;
            thing[i + 1] = 1;
        }
    }
    for(int i = times; i < times2; i++){
        if(thing[i] == '0'){
            test++;
        }
    }
    cout << test;
}