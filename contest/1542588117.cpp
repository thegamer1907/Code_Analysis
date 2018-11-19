/*
 * I wish I could travel by the road that crosses baby's mind,
 * and out beyond all bounds;
 * Where messengers run errands for no cause 
 * between the kingdoms of kings of no history;
 * Where Reason makes kites of her laws and flies them, 
 * and Truth sets Fact free from its fetters.
 *                                         Rabindranath Tagore
 */

#include <bits/stdc++.h>
using namespace std;

#ifndef I_Prefer_Being_HACKED_to_Being_FST
#define I_Prefer_Being_HACKED_to_Being_FST
#endif

#ifndef F_ALONSO_14
#define F_ALONSO_14
#endif

#ifndef BLESS_ME
#define BLESS_ME
#endif

#ifndef ORZ_EVERYBODY
#define ORZ_EVERYBODY
#endif

#define error(args...) { \
    cerr << "DEB: "; \
    vector<string> _vc; \
    _split(_vc, #args, ','); \
    _error(_vc.begin(), args); \
}
inline void _split(vector<string>& vc, const string& str, char ch) {
    string temp; stringstream ss(str);
    while (getline(ss, temp, ch)) vc.emplace_back(temp);
}
void _error(vector<string>::iterator it) { cerr << "\n"; }
template<typename T, typename ...Args>
void _error(vector<string>::iterator it, const T& x, Args ...args) {
    cerr << *it << " = " << x << "   ";
    _error(++it, args...);
}



int main() {
    const int all = 60 * 1e6;
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (m == 60) m = 0;
    if (s == 60) s = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    h /= 12; m /= 60; s /= 60; t1 /= 12; t2 /= 12;
    m += s / 60;
    h += m / 60;
    h *= 1e6; m *= 1e6; s *= 1e6; t1 *= 1e6; t2 *= 1e6;
    h = int(h); m = int(m); s = int(s); t1 = int(t1); t2 = int(t2);
    bool ok = true;
    if (t1 > t2) swap(t1, t2);
    for (int i = t1; i <= t2 && ok; i++) 
        if (i == h || i == m || i == s) ok = false;
    if (ok) return puts("yes"), 0;
    ok = true;
    for (int i = t1 + all; i >= t2; --i)
        if (i % all == h || i % all == m || i % all == s) ok = false;
    if (ok) return puts("yes"), 0;
    puts("no");
    return 0;
}