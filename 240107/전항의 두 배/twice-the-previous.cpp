#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int arr[10];

    cin >> n1 >> n2;
    arr[0] = n1;
    arr[1] = n2;
    for(int i = 2; i < 10; i++) {
        arr[i] = arr[i-1] + 2 * arr[i-2];
    }

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}