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

const size_t MAX_N = 200 + 5;

struct sp_string {
    string all;
    int k;
} str[MAX_N];

int arr[MAX_N];
bool check(const string& str, int k, int i = 0) {
    if (k > (str.size()) << 1) return false;
    if (i == k) {
        string cur;
        for (int i = 0; i < k; i++) cur += char(arr[i] + '0');
        return str.find(cur) != string::npos;
    }
    arr[i] = 0;
    if (!check(str, k, i + 1)) return false;
    arr[i] = 1;
    return check(str, k, i + 1);
}

int main() {
    ios::sync_with_stdio(false);
    int n, m, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> str[i].all;
        for (str[i].k = 0; check(str[i].all, str[i].k + 1); ++str[i].k) 
            continue;
    }
    cin >> m;
    for (int _ = n + m, a, b; i <= _; i++) {
        cin >> a >> b;
        str[i].all = str[a].all;
        str[i].all.append(str[b].all);
        if (str[i].all.size() >= 2000) {
            string t = str[i].all.substr(str[i].all.size() - 1000);
            str[i].all = str[i].all.substr(0, 1000);
            str[i].all.append(t);
        }
        for (str[i].k = max(str[a].k, str[b].k); 
            check(str[i].all, str[i].k + 1); ++str[i].k) continue;
        cout << str[i].k << '\n';
    }
}