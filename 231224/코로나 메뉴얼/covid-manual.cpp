#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    int d, e, f, count = 0;
    cin >> a >> d >> b >> e >> c >> f;

    if((a == 'Y') && (d >= 37)) {
        count += 1;
    }
    if((b == 'Y') && (e >= 37)) {
        count += 1;
    }
    if((c == 'Y') && (f >= 37)) {
        count += 1;
    }

    if(count >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}