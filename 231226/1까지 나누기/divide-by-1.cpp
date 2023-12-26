#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    for(int i = 1; i <= 5000; i++) {
        if((n / i) <= 1) {
            cout << cnt;
            break;
        }
        n /= i;
        cnt++;
    }
    return 0;
}