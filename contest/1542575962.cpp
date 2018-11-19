#include<bits/stdc++.h>
#define sz size()
#define pb push_back
#define ALL(X) (X).begin(),(X).end()
using namespace std;

int n, q, b;
char s[111][111];
vector<string> tot_vec[9];
string strs[222][2];
set<string> d[222][9];

inline int solve(const int cur, const int le, const int ri)
{
    int ret = 0;
    auto& c_set = d[cur];
    for (int i = 1; i <= 8; i++) {
        c_set[i].insert(ALL(d[le][i]));
        c_set[i].insert(ALL(d[ri][i]));
        string v = strs[le][1] + strs[ri][0];
        for (const auto& p: tot_vec[i]) {
            if (v.find(p) != string::npos)
                c_set[i].insert(p);
        }
        if (c_set[i].sz >= (1 << i)) ret = i;
    }

    if (strs[le][0].sz >= 16) {
        strs[cur][0] = strs[le][0];
    } else {
        strs[cur][0] = strs[le][0] + strs[ri][0];
    }

    if (strs[ri][1].sz >= 16) {
        strs[cur][1] = strs[ri][1];
    } else {
        strs[cur][1] = strs[le][1] + strs[ri][1];
    }

    return ret;
}

int main()
{
    for (int i = 1; i <= 8; i++) {
        vector<string> &sv = tot_vec[i];
        string t; for (int j = i; j--;) t.push_back('0');
        for (int j = 0; j < 1 << i; j++) {
            for (int k = 0; k < i; k++)
                t[k] = j >> k & 1 ? '1' : '0';
            sv.push_back(t);
        }
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
        string &t = strs[i][0], &u = strs[i][1];

        const int lx = strlen(s[i]);
        for (int k = 0; k < lx && k < 16; k++) {
            t += s[i][k], u += s[i][max(0, lx-16)+k];
        }

        const string x = s[i];
        for (int j = 1; j <= 8 && j <= lx; j++) {
            for (const auto& p: tot_vec[j])
                if (x.find(p) != string::npos)
                    d[i][j].insert(p);
        }
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int l, r; scanf("%d%d", &l, &r);
        printf("%d\n", solve(n+i, --l, --r));
    }

    return 0;
}
