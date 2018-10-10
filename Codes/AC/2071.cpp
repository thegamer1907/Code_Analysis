#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
map<ll,ll>l,r;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    ll k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=0;
    for(int i=0;i<n;i++)r[a[i]]++;
    for(int i=0;i<n;i++){
        r[a[i]]--;
        if(a[i]%k!=0)l[a[i]]++;
        if(a[i]%k!=0)continue;

        ans+=l[a[i]/k]*r[a[i]*k];
        l[a[i]]++;
    }
    cout<<ans;
    return 0;
}
