#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
        cout << "C";
    }
    else {
        cout << "N";
    }
    return 0;
}