#include <iostream>

using namespace std;

int main() {
    string password;
    cin >> password;
    int n;
    cin >> n;
    if (n >= 1 && n <= 1000) {
        bool equal =false;
        bool first = false;
        bool second = false;
        for (int i = 0; i < n; i++) {
            string tmp;
            cin >> tmp;
            if (tmp.size() != 2) {
                return 1;
            }

            if (tmp == password){
                equal = true;
            }

            if (tmp.at(1) == password.at(0)) {
                first = true;
            }

            if (tmp.at(0) == password.at(1)) {
                second = true;
            }
        }

        if (first && second) {
            cout << "YES";
        } else {
            if (equal){
                cout << "YES";
            }
            else {
                cout << "NO";
            }
        }
    }

    return 0;
}