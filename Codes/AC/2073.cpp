#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
map<ll,ll>m1,m2;
map<ll,bool>b;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    ll k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=0;
    if(k==1){
        for(int i=0;i<n;i++){
            m1[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(b[a[i]]==false){
                ans+=(m1[a[i]]*(m1[a[i]]-1)*(m1[a[i]]-2))/6;
                b[a[i]]=true;
            }
        }
        cout<<ans;
        return 0;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==0)continue;
        m1[a[i]]++;
        m2[a[i]]+=m1[a[i]*k];
        ans+=m2[a[i]*k];
    }
    ll cnt=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==0)cnt++;
    }
    ans+=(cnt*(cnt-1)*(cnt-2))/6;
    cout<<ans;
    return 0;
}
