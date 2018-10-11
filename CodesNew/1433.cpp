#include <bits/stdc++.h>

using namespace std;

int main() {
    string st;
    cin >> st;
    long long b = 0, s = 0, c = 0;
    for (auto it: st) {
        if(it == 'B')
            b++;
        if (it == 'S')
            s++;
        if (it == 'C')
            c++;
    }
    long long  curb, curs, curc;
    cin >> curb >> curs >> curc;
    long long pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long mon;
    cin >> mon;
    long long l = 0, r = 1e12 + 10000;
    while (r - l > 1) {
        long long m = (r + l) >> 1;
        if (max(0LL, b * m - curb) * pb + max(0LL, s * m - curs) * ps + max(0LL, c * m - curc) * pc <= mon) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << l;
}
