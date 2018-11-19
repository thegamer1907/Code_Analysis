#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#define FINAL_OUT(x) {cout << (x) << '\n'; exit(0);}

int const maxl = 17;

typedef bitset<1<<(maxl + 1)> Bits;


inline void addSubstr(const string& str, Bits& bits)
{
    int l = str.length();
    for(int j = 1; j < maxl; ++j)
    for(int s = 0; s + j <= l; ++s)
    {
        int cur = 1;
        for(int k = s; k < s + j; ++k)
        {
            cur <<= 1;
            cur += str[k] == '1';
        }
        bits.set(cur);
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<string> a(n);
    vector<Bits> cnt(n);
    vector<pair<int,int> > v(n);
    vector<pair<string,string> > pref(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pref[i] = {a[i], a[i]};
        addSubstr(a[i], cnt[i]);
    }


    int m;
    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        int x,y;
        cin >> x >> y;
        --x, --y;
        v.emplace_back(x, y);

        string pl = pref[x].first;
        if (pl.length() < maxl)
            pl += pref[y].first;

        string pr = pref[y].second;
        if (pr.length() < maxl)
            pr = pref[x].second + pr;
        pref.emplace_back(pl, pr);
        cnt.push_back(cnt[x] | cnt[y]);

        addSubstr(pref[x].second + pref[y].first, cnt.back());
        int ans = 2;
        while (cnt.back().test(ans)) ++ans;
        int res = 0;
        while ((1 << res) < ans) ans -= (1 << res), ++res;
        cout << res - 1 << '\n';
    }
}
