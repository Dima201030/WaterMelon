#include <iostream>

using namespace std;
int main() {
    int number;
    while (true) {
        cin >> number;
        if (number >= 4 && number % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
