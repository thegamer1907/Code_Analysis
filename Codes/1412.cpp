#include <bits/stdc++.h>

#define fr first
#define sc second
typedef long long ll;
using namespace std;
ll const MAXN=1e5+10,pi=acos(-1);
ll n,s,ans,p[101010],a[101010];
bool valid(ll m){
    for(int i=0;i<n;i++)
        a[i]=p[i]+(i+1)*m;
    sort(a,a+n);
    ll cost=0;
    for(int i=0;i<m;i++)
        cost+=a[i];
    return cost<=s;
}


int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    ll s=0,e=n,m;
    while(s<=e){
        m=(s+e)/2;
        if(valid(m))ans=m,s=m+1;
        else {
            if(s==e)break;
                e=m;
        }
    }
    ll t=0;
    for(int i=0;i<n;i++){
        a[i]=p[i]+(i+1)*ans;
    }
    sort(a,a+n);
    for(int i=0;i<ans;i++){
        t+=a[i];
    }
    cout<<ans<<" "<<t;
}
