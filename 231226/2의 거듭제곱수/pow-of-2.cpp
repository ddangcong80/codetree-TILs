#include <iostream>
using namespace std;

int main() {
    int n, x = 2, cnt = 1;
    cin >> n;

    while (true) {
        if(x == n) {
            cout << cnt;
            break;
        }
        x *= 2;
        cnt++;
    }
    return 0;
}