#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, MOD = 1e9 + 7;

long long S, B, C;
long long ns, nb, nc;
long long ps, pb, pc;
long long R;

bool ch(long long m) {
    long long s = m * S - ns < 0 ? 0 : m * S - ns, b = B * m - nb < 0 ? 0 : m * B - nb, c = C * m - nc < 0 ? 0 : C * m - nc;
    long long r = R;
    r -= (s * ps + b * pb + c * pc);
    if (r < 0) {
        return false;
    }
    return true;
}

int main() {
    string str; cin >> str;
    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] == 'S') {
            S++;
        }
        else if (str[i] == 'B') {
            B++;
        }
        else {
            C++;
        }
    }
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> R;
    long long l = 0, r = 1e13;
    while (r - l > 1) {
        long long m = (l + r) / 2;
        if (ch(m)) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << l << endl;
    return 0;
}
