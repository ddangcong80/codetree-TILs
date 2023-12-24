#include <iostream>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;
    min = a < b ? a : b;
    min = min < c ? min : c;
    cout << min;
    return 0;
}