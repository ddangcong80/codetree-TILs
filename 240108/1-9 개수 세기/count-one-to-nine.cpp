#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int cnt_arr[10] = {};

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cnt_arr[arr[i]]++;
    }

    for(int i = 1; i < 10; i++) {
        cout << cnt_arr[i] << endl;
    }
    return 0;
}