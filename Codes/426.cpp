#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fs first
#define se second
#define ll long long
#define pb push_back
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i >= l; i--)
#define mod       100000000
const int N = 505;
ll ans;
bool f(ll m)
{
    ll s=0;
    while(m!=0)
    {
        s += m%10;
        m /= 10;
    }
    if(s==10)return 1;
    return 0;
}

ll sea(ll s, ll n)
{
    //cout<<s<<" "<<n<<"\n";
    for(ll i=s;i<=n;i++)
    {
        if(f(i))return i;
    }
    
}
int main()
{
    int k;cin>>k;
    ans=15;
    for(int i=1;i<=k;i++)
    {
        ans = sea(ans+1,ans+pow(10,(int)log10(ans)+1));
    }
    cout<<ans;
    return 0;   
}