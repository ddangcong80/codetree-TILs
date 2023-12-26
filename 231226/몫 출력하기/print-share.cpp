#include <iostream>
using namespace std;

int main() {
    int num, cnt = 0;

    while(true) {
        cin >> num;
        if(cnt == 3) {
            break;
        }
        if(num % 2 == 0) {
            cout << num / 2 << endl;
            cnt++;
        }
    }
    return 0;
}