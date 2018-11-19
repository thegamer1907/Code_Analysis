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

const size_t MAX_N = 1e5 + 5;

int inp[MAX_N][5];
bool msk[16];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < k; j++) 
            scanf("%d", inp[i] + j);
    for (int j = 0; j < k; j++)
        for (int i = 0; i <= n; i++)
            if (i == n) return puts("no"), 0;
            else if (!inp[i][j]) break;
    if (k == 1 || k == 2) return puts("yes"), 0;
    int all = 0, mn = INT_MAX;
    for (int i = 0, cnt; i < n; i++)
        for (int j = cnt = 0; j <= k; j++)
            if (j == k) {
                mn = min(mn, cnt);
                all += cnt < 2;
            } else {
                cnt += inp[i][j];
            }
    if (all) return puts("yes"), 0;
    if (k == 3 || mn > 2) return puts("no"), 0;
    for (int i = 0, cnt, mask; i < n; i++)
        for (int j = cnt = mask = 0; j <= k; j++) 
            if (j == k && cnt == 2) {
                msk[mask] = true;
            } else {
                cnt += inp[i][j];
                if (!inp[i][j]) mask |= 1 << j;
            }
    for (int i = 0; i < 16; i++)
        if (msk[i] && msk[i ^ 15]) return puts("yes"), 0;
    puts("no");
    return 0;
}