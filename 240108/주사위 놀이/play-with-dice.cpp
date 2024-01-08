#include <iostream>
using namespace std;

int main() {
    int num;
    int cnt_arr[7] = {};

    for(int i = 0; i < 10; i++) {
        cin >> num;
        cnt_arr[num]++;
    }

    for(int i = 1; i < 7; i++) {
        cout << i << " - " << cnt_arr[i] << endl;
    }
    return 0;
}