#include <iostream>
using namespace std;

int main() {
    int num;
    int cnt_arr[11] = {};

    for(int i = 0; i < 101; i++) {
        cin >> num;
        if(num == 0) {
            break;
        }
        cnt_arr[num / 10]++;
    }

    for(int i = 10; i > 0; i--) {
        cout << i << "0" << " - " << cnt_arr[i] << endl;
    }
    return 0;
}