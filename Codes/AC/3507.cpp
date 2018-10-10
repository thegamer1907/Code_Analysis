#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef pair<int, int>pii;
ll n;
bool test(ll val)
{
    ll tot=0, cnt=n;
    while(cnt)
    {
        ll amt=min(cnt, val);
        cnt-=amt;
        cnt-=cnt/10;
        tot+=amt;
    }
    return tot*2>=n;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin>>n;
    ll l=1, r=n, ans=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(test(mid))
        {
            ans=min(ans, mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"\n";
    return 0;
}
