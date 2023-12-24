#include <iostream>
using namespace std;

int main() {
    int m, kg, res;
    cin >> m >> kg;

    res = kg / ((m * 0.01) * (m * 0.01));

    cout << res << endl;
    if(res >= 25) {
        cout << "Obesity";
    }
    return 0;
}