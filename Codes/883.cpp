#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 100005
#define maxm 500005
#define pii pair <int,int>
#define Task ""
using namespace std;
int n,k,ans;
char c[maxn];
void Calc()
{
    int l = 1,cur = 0;
    FOR(i,1,n)
    {
        cur += c[i] == 'a';
        while (cur > k)  cur -= c[l++] == 'a';
        ans = max(ans,i - l + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen(".inp", "r",stdin);
    cin >> n >> k;
    FOR(i,1,n) cin >> c[i];
    Calc();
    FOR(i,1,n) c[i] = (c[i] == 'a') ? 'b' : 'a';
    Calc();
    cout << ans;
}
