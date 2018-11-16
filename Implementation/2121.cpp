#include <iostream>
#include <algorithm>
using namespace std;

int n,s;
int k[105][105];
bool tf = 1;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> k[i][j];
        }
    }
    for (int j = 0; j < 3; j++) {
        s = 0;
        for (int i = 0; i < n; i++) {
            s += k[i][j];
        }
        if (s != 0) {
            tf = 0;
        }
    }
    if (tf) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
