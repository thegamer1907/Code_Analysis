#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define all(a) (a).begin(),(a).end()
#define ff first
#define ss second
#define ppi pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define mod 1000000007
#define debug(a)    cerr<<#a<<": ";for(auto i:a)cerr<<i<<" ";cerr<<'\n';
#define trace(a) cerr<<#a<<": "<<a<<"\n"
#define reflex ios_base::sync_with_stdio(false)
#define int long long
using namespace std;
const int N = 100005;
int dp[N],sp[N];
int add(int a,int b){
    a = a + b;
    if(a>=mod)
        a-=mod;
    return a;
}
int sub(int a,int b){
    a = a - b;
    if(a<0)
        a+=mod;
    return a;
}
int solve(){
    int a,b;
    cin>>a>>b;
    cout<<sub(sp[b],sp[a-1])<<endl;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    int t,k;
    cin>>t>>k;
    dp[0] = 1;
    rep(i,1,N-5){
        if(i>=k)
            dp[i] = add(dp[i-k],dp[i-1]);
        else
            dp[i] = dp[i-1];
        sp[i] = add(dp[i],sp[i-1]);
    }
    while(t--)
        solve();
    return 0;
}
