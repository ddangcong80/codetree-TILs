#include <iostream>
using namespace std;

int main() {
    int num;
    int cnt_arr[10] = {};

    for(int i = 0; i < 100; i++) {
        cin >> num;
        if(num == 0) {
            break;
        }
        cnt_arr[num / 10]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << i << " - " << cnt_arr[i] << endl;
    }
    return 0;
}