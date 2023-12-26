#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt = 0;
    int num;
    for(int i = 0; i < 10; i++) {
        cin >> num;
        if((num >= 0) && (num <= 200)) {
            sum += num;
            cnt++;
        } 
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}