#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, sum = 0;
    int arr[4];
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(((double)sum / 4) >= 60.0) {
            cout << "pass" << endl;
            cnt++;
        }
        else {
            cout << "fail" << endl;
        }
        sum = 0;
    }

    cout << cnt;

    return 0;
}