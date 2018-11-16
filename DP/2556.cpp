#include <iostream>
using namespace std;

int n, a, len = 0, current = 1000000007, maxlen = 0;

int main() {
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> a;
        len = a>current?++len:1;
        if (len > maxlen)
            maxlen = len;
        current = a;
    }

    cout << maxlen << endl;
    return 0;
}
