#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 1000006
#define maxm 500005
#define pii pair <int,int>
#define Task ""
using namespace std;
string s;
int z[maxn],n,cnt[maxn];
vector <pii> ans;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen(".inp", "r",stdin);
    //freopen(".out", "w",stdout);
    cin >> s;
    n = s.size();
    for (int i = 1, l = 0, r = 0; i < n;++i)
    {
        if (i <= r) z[i] = min(z[i-l],r - i + 1);
        while (i + z[i] < n && s[z[i]] == s[i+z[i]]) ++z[i];
        if (i + z[i] - 1 > r) l = i,r = i + z[i] - 1;
    }
    FOR(i,0,n-1) ++cnt[z[i]];
    FORD(i,n-2,0) cnt[i] += cnt[i+1];
    FOR(i,0,n-1)
        if (i + z[i] == n)
            ans.pb(mp(z[i],cnt[z[i]] + 1));
    ans.pb(mp(n,1));
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    for (auto v : ans)
        if (v.S > 2)
        {
            cout << s.substr(0,v.F);
            return 0;
        }
    cout << "Just a legend";
    return 0;
}
