#include <iostream>

using namespace std;

int n, t, x, y = 1;

int main(int, char**) {
    cin >> n >> t;
    for (int i = 0; y < t && i < n - 1; ++i) {
        cin >> x;
        if (i+1 == y) {
            y += x;
        }
    }
    cout << (y == t ? "YES\n" : "NO\n");
    return 0;
}
