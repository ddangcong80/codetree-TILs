#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i > 0; i--) {
        for(int k = 0; k < n - i; k++) {
            cout << "  ";
        }
        for(int j = 2 * i - 1; j > 0 ; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = n - i - 2; j > 0; j--) {
                cout << "  ";
        }
        for(int k = 0; k < 2 * (i + 1) + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}