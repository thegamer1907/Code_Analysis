/*****Enigma_27*****/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pll         pair<ll,ll>
#define vll          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll n,i,j,k,l,sum=-1,ans=0,a[100005],m;
map<ll,set<ll> > dp;
int main()
{
    ios
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=0;i<m;i++)
    {
        cin>>k>>l;
        if(a[k]!=a[l]) dp[a[k]].insert(a[l]),dp[a[l]].insert(a[k]);
    }
    sum=0;ans=*min_element(a+1,a+1+n);
    for(auto i:dp)
    {
        if(i.s.size()>sum) {sum=i.s.size();ans=i.f;}
    }
    if(ans==0)
    {
        sort(a+1,a+n+1);
        cout<<a[1];
    }
    else cout<<ans<<endl;
 	return 0;
}
