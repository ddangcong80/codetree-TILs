#include <iostream>
using namespace std;

int main() {
    int num;
    bool check = true;

    for(int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 3 != 0) {
            check = false;
        }
    }
    if(check) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}