#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int number;
    while (true) {
        cin >> number;
        if (number % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
