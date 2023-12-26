#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, cnt = 0;
    while(true) {
        cin >> num;
        if(num / 10 != 2) {
            cout << fixed;
            cout.precision(2);
            cout << (double)sum / cnt;
            break;
        }
        sum += num;
        cnt++;
    }
    return 0;
}