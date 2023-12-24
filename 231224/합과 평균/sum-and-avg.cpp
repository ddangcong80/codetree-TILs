#include <iostream>
using namespace std;

int main() {
    int a, b;
    double res;
    cin >> a >> b;
    res = ((double)(a + b)) / 2;
    cout << fixed;
    cout.precision(1);
    cout << a + b << " " << res;
    return 0;
}