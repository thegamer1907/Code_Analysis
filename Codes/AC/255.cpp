#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
typedef long long ll;
const ll N = 1e5+5;
ll a[N],b[N];


int main()
{
    ios_base::sync_with_stdio(false);

    ll n;cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];if(i>0)a[i]+=a[i-1];}
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    ll m;cin>>m;
    while(m--)
    {
        ll k;cin>>k;
        ll p = lower_bound(a,a+n,k)-a;
        cout<<p+1<<endl;
    }

}
