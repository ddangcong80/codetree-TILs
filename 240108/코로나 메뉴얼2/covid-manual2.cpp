#include <iostream>
using namespace std;

int main() {
    char cold;
    int hot;
    int cnt_arr[4] = {};

    for(int i = 0; i < 3; i++) {
        cin >> cold >> hot;
        if(cold == 'Y') {
            if(hot >= 37) {
                cnt_arr[0]++;
            }
            else {
                cnt_arr[2]++;
            }
        }
        else if(cold == 'N') {
            if(hot >= 37) {
                cnt_arr[1]++;
            }
            else {
                cnt_arr[3]++;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        cout << cnt_arr[i] << " ";
    }
    if(cnt_arr[0] >= 2) {
        cout << "E";
    }
    return 0;
}