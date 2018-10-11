#include <map>
#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    int mb = 0, ms = 0, mc = 0;
    for (int i = 0; i < s.size(); i++)
        switch (s[i]) { case 'B': mb++; break; case 'C': mc++; break; case 'S': ms++; break; }
    long long nb, ns, nc, pb, ps, pc, r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    long long lower = 0, upper = 1LL << 40;
    while (upper - lower > 1) {
        long long mid = (upper + lower) / 2;
        if (r >= pb * max(0LL, mb * mid - nb) + pc * max(0LL, mc * mid - nc) + ps * max(0LL, ms * mid - ns))
            lower = mid;
        else upper = mid;
    }
    cout << lower << endl;
}
