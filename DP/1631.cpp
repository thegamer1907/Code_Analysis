#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

string sir;

int main() {
    #ifndef ONLINE_JUDGE
        freopen ("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> sir;
    if (sir.find ("AB") != -1) {
        int p = sir.find ("AB");
        if (sir.find ("BA", p + 2) != -1) {
            cout << "YES";
            return 0;
        }
    }

    if (sir.find ("BA") != -1) {
        int p = sir.find ("BA");
        if (sir.find ("AB", p + 2) != -1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}