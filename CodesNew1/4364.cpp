#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define pii pair<ll,ll>
#define vi vector<ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define pf(n) printf("%lld\n",n)
#define sf(n) scanf("%lld",&n)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
#define ms(n,i) memset(n,i,sizeof n)
#define sz(x) (int)x.size()
#define pi 3.141592653589793238
#define hell 1000000007

int main()
{
    fast
    ll n,i,j,k,ans=0;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    ll var=sz(s[n-1]);
    for(i=n-1;i>0;i--){
        j=0;
        while(j<sz(s[i]) and s[i][j]==s[i-1][j])
            j++;
        if(j==sz(s[i])&&j<sz(s[i-1]))
            s[i-1]=s[i-1].substr(0,sz(s[i]));
        else if(s[i][j]<s[i-1][j])
            s[i-1]=s[i-1].substr(0,j);
    }
    for(i=0;i<n;i++)
        cout<<s[i]<<endl;
}