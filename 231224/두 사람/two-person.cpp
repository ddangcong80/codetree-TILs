#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c, d;

    cin >> a >> c >> b >> d;

    if((a >= 19) && (c == 'M')) {
        cout << 1;
    }
    else if((b >= 19) && (c == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}