#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if((a % 3 == 0) || (a % 5 == 0)) {
        cout << 1;
    }   
    else {
        cout << 0;
    }
    return 0;
}