#include <iostream>
using namespace std;

int main() {
    int num;
    while(true) {
        cin >> num;
        if(num == 0) {
            break;
        }
        else {
            cout << num << endl;
        }
    }
    return 0;
}