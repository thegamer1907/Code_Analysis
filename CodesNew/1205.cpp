#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define pii     pair<ll,ll>
#define vi      vector<ll>
#define mp      make_pair
#define pb      push_back
#define fi      first
#define se      second
#define pf(n)   printf("%lld\n",n)
#define sf(n)   scanf("%lld",&n)
#define fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x)  x.begin(),x.end()
#define ms(n,i) memset(n,i,sizeof n)
#define sz(x)   (ll)x.size()
#define pi      3.141592653589793238
#define hell    1000000007
#define endl    '\n'
#define inf      1e18
#define N       100005


int main()
{
    ll n,i,j,k,ans=0;
    cin>>n;
    ll a[n],p[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    ll tme=0;
    for(i=0;i<n;i++){
        p[i]=tme+(a[i]-i)+(n-(a[i]-i)%n)%n;
        if(p[i]==0)return cout<<i+1,0;
        tme++;
    }
    ans=hell;
    ll idx;
    for(i=0;i<n;i++){
        if(ans>p[i])
            idx=i,ans=p[i];
    }
    cout<<idx+1<<endl;
}