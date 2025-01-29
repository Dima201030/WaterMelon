#include <iostream>

using namespace std;
bool isInteger(const string &str) {
    if (str.empty()) return false; // Пустая строка — не число

    for (char ch : str) {
        if (isdigit(ch)) return false; // Если не цифра — не число
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "RU");
    string str;
    int leight;
    
    while (true) {
        cin >> str;leight = str.length();
        if (isInteger(str)) { 
            if (str.length() > 10) {
                cout << str[0] << leight - 2 << str[str.length() - 1] << endl;
            } else {
                cout << str << endl;
            }
        } else {
            str = "";
            cout << "Error: an integer has been entered! The variable has been reset to zero.\n";
        }
        
    }
    return 0;
}
