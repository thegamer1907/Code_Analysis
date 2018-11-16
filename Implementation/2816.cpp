#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2) {
        cout << 1 << '\n' << 2 << '\n';
        return 0;
    }

    if (n == 3) {
        cout << 1 << '\n' << 3 << '\n';
        return 0;
    }

    int nr = 0;
    while (n > 3) {
        n -= 2;
        ++ nr;
    }

    if (n == 2) {
        cout << nr + 1 << '\n';
        for (int i = 1; i <= nr + 1; ++ i) {
            cout << 2 << ' ';
        }

        return 0;
    }

    cout << nr + 1 << '\n';
    for (int i = 1; i <= nr; ++ i) {
        cout << 2 << ' ';
    }

    cout << 3 << '\n';
    return 0;
}
