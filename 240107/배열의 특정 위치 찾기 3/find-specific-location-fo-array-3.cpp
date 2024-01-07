#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int sum = 0;
    int cnt = 0;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        cnt++;
    }

    for(int i = 0; i < 3; i++) {
        sum += arr[cnt - i - 1];
    }
    cout << sum;
    return 0;
}