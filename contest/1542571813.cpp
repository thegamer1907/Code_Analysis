#include <iostream>
#include <string>

using namespace std;

int main() {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    string w[101];
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    bool l = false;
    for (int i = 0; i < n; ++i) {
        if (pass == w[i]) {
            l = true;
            break;
        }
    }
    if (!l) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((pass[0] == w[i][1]) && (pass[1] == w[j][0])) {
                    l = true;
                }
            }
        }
    }
    if (l) {
        cout << "YES";
    }
    if (!l) {
        cout << "NO";
    }
    return 0;
}