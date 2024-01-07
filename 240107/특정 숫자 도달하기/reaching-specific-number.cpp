#include <iostream>
using namespace std;

int main() {
    int sum = 0, arr[10];
    double avg;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] >= 250) {
            break;
        }
        else {
            sum += arr[i];
            avg = (double)sum / (i + 1);
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " ";
    cout << avg;
    return 0;
}