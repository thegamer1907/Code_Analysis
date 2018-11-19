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

const size_t MAX_N = 100 + 5;

char str[MAX_N][5], inp[5];

int main() {
    scanf("%s", inp);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", str[i]);
    for (int i = 0; i < n; i++)
        if (str[i][0] == inp[0] && str[i][1] == inp[1])
            return puts("yes"), 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (str[i][1] == inp[0] && str[j][0] == inp[1])
                return puts("yes"), 0;
    puts("no");
    return 0;
}