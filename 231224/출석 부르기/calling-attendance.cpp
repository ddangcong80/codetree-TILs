#include <iostream>
using namespace std;
int main() {
    int name;
    cin >> name;

    if(name == 1) {
        cout << "John";
    }
    else if(name == 2) {
        cout << "Tom";
    }
    else if(name == 3) {
        cout << "Paul";
    }
    else {
        cout << "Vacancy";
    }
    return 0;
}