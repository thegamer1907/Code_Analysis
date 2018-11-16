#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long res = 0;
    char last = 'x';
    char c;
    while (cin >> c) {
        if (c != last) {
            res++;
            last = c;
        }
    }
    cout << (n - res) << endl;
}
