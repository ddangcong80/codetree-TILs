#include <iostream>
using namespace std;

int main() {
    int n, prod = 1;
    cin >> n;
    for(int i = 1; i <= 10; i++) {
        if((i * prod) >= n) {
            cout << i;
            break;
        }
        prod *= i;
    }
    return 0;
}