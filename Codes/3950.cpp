#include <bits/stdc++.h>
using namespace std;
string s;
long long na, nb, nc;
long long pa, pb, pc;
long long r;
long long a, b, c;

bool check(long long x) {
    long long res = 0;
    long long needa = max(0LL, x * a - na);
    long long needb = max(0LL, x * b - nb);
    long long needc = max(0LL, x * c - nc);
    return needa * pa + needb * pb + needc * pc <= r;
}

int main() {
    cin >> s;
    cin >> na >> nb >> nc;
    cin >> pa >> pb >> pc;
    cin >> r;
    a = b = c = 0;
    for (int i = 0; i < s.size(); i++) {
        a += s[i] == 'B';
        b += s[i] == 'S';
        c += s[i] == 'C';
    }
    long long lo = 0, hi = 1e12 + 400;
    long long res = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) >> 1;
        if (check(mid)) {
            res = mid;
            lo = mid + 1;
        } else hi = mid - 1;
    }
    cout << res << endl;
}
