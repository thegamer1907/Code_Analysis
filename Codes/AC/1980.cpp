#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
const int M=200005;
int n,m,y;
ll sum,k,x,ans,a[M];
map<ll,ll>freq,vis;

int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    if(x==1){
        for(int i=0;i<n;i++)freq[a[i]]++;
        for(auto i:freq){
            ans+=1LL*i.second*(i.second-1)*(i.second-2)/6;
        }
        cout<<ans;
        return 0;
    }
    for(int i=n-1;i>=0;i--){
        if(vis.find(a[i]*x)!=vis.end())
            ans+=vis[a[i]*x];
        if(freq.find(a[i]*x)!=freq.end())
            vis[a[i]]+=freq[a[i]*x];
        freq[a[i]]++;
    }
    cout<<ans;
    return 0;
}
