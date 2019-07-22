#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef long long ll;
const ll mod=1e9+7;
const int maxn=1.3e7+5;
vector<ll>v;
int main()
{
    ll n,m,k,x,y;
    cin>>n>>m>>k;
    y=k;
    for(ll i=0;i<m;i++)
    {
        scanf("%lld",&x);
        v.push_back(x);
    }
    //sort(v.begin(),v.end());
    ll ans=0,cnt=0;
    ll len=v.size();
    for(ll i=0;i<len;)
    {
        while(v[i]<=k&&i<len)
        {
            cnt++;
            i++;
        }
        if(cnt)ans++;
        k+=cnt;
        cnt=0;
        if(i>=len)break;
        if(k<v[i])k=k+((v[i]-k-1)/y+1)*y;
    }
    printf("%lld\n",ans);
}