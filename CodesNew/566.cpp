#include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const ll MAX_N = 1e7+100;
const int MOD = 1e9+7;
const ll delta = 10333;
const ll INF = 1e18;
using namespace std;

int mark[MAX_N];
int cnt[MAX_N];
bool seen[MAX_N];
vector<int> v;
ll mn = 1e7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ll n;
    cin >> n;
    for(int i = 0;i<n;++i)
    {
        int x;
        cin >> x;
        mark[x]++;
    }
    for(int i = 2;i<=mn;++i)
    {
        if (seen[i])
            continue;
        for(int j = i;j<=mn;j+=i)
            cnt[i]+=mark[j],seen[j] = 1;
    }
    for(int i = 2;i<=(1e7);++i) cnt[i]+=cnt[i-1];
    ll m;
    cin >> m;
    while(m--)
    {
        ll l,r;
        cin >> l >> r;
        l = min(l,(ll)(1e7));
        r = min(r,(ll)(1e7));
        cout << cnt[r]-cnt[l-1] << endl;
    }
    return 0;
}
