#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=1e5+10;
ll p[maxn],n,m,k;

int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
        cin>>p[i];
    ll sum=0,ans=0;
    int i=0;
    while(i<m)
    {
        ll x=p[i]-sum;
        ll e=x/k*k+k*(x%k==0?0:1);
        //0cout<<i<<" "<<p[i]<<" "<<e<<endl;
        ans++;
        ll tmp=sum;
        while(i<m&&p[i]-tmp<=e)
        {
            i++;
            sum++;
        }
        //cout<<i<<" "<<p[i]-tmp<<" "<<e<<endl;
    }
    cout<<ans<<endl;
}