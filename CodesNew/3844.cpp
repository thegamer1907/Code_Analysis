#include <bits/stdc++.h>

using namespace std;

const int mx = 1e5+5;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<int,pii>piii;

#define  sf scanf
#define  pf printf

#define  input freopen("input.txt","r",stdin)
#define  output freopen("output.txt","w",stdout)

#define  inf 1e14
#define  ff first
#define  ss second
#define  MP make_pair
#define  pb push_back
#define  all(v) v.begin(), v.end()

int main()
{
    ll n;
    cin >> n;

    ll sum = 0, lo = 0, hi = inf, ans;
    for(int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
        lo = max(lo, x);
    }
    while(lo<=hi)
    {
        ll mid = (lo+hi)>>1;
        ll x = mid*(n-1);
        if(x>=sum)
        {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    cout << ans << '\n';
    return 0;
}
