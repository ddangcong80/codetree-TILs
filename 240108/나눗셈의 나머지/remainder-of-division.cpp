#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0;
    int cnt_arr[1001] = {};

    cin >> a >> b;
    cnt_arr[a % b]++;
    a /= b;

    while(a > 1) {
        cnt_arr[a % b]++;
        a /= b;
    }

    for(int i = 0; i < 1001; i++) {
        sum += cnt_arr[i] * cnt_arr[i];
    }

    cout << sum;
    return 0;
}