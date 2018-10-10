#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 200005
#define Task "QUEENS"
using namespace std;
long long n,k,a[maxn],save[maxn],ans;
map <long long,long long> dd,dd1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    //freopen(".inp", "r", stdin);
    cin >> n >> k;
    FOR(i,1,n)
    {
        cin >> a[i];
        if (a[i] % k == 0) save[i] = dd[a[i]/k];
        ++dd[a[i]];
    }
    FORD(i,n,1)
    {
        ans += save[i] * dd1[a[i]*k];
        ++dd1[a[i]];
    }
    cout << ans;
    return 0;
}
