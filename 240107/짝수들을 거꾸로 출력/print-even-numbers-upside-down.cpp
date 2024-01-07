#include <iostream>
using namespace std;

int main() {
    int n, num, cnt = 0;
    int arr[100];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num % 2 == 0) {
            arr[cnt++] = num;
        }
    }

    for(int i = 0; i < cnt; i++) {
        cout << arr[cnt - i - 1] << " ";
    }
    return 0;
}