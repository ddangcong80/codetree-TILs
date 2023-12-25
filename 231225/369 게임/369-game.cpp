#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if((i % 3 == 0) || (to_string(i).find("3") != string::npos) || (to_string(i).find("6") != string::npos) || (to_string(i).find("9") != string::npos)) {
            cout << 0 << " ";
        }
        else {
            cout << i << " ";
        }
    }
    return 0;
}