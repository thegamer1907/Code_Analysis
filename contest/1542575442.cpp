#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define MAXN  1000005
using namespace std;
vector<ll>v(70,0);
ll dp[20][20][20][20][20];
ll n,k;

ll rec(ll i,ll z,ll x,ll c,ll d,ll b){
    ll ss=b/2;
    if(i>=16){
        if(max(max(z,x),max(c,d))<=ss&&b>0){
            return 1;
        }
        return 0;
    }
    ll ans=0;
    if(dp[i][z][x][c][d]!=-1)
        return dp[i][z][x][c][d];
    if(v[i]==1){
        ll zz,xx,cc,dd;
        zz=z;xx=x;cc=c;dd=d;
        if(i&1)
            zz++;
        if(i&2)
            xx++;
        if(i&4)
            cc++;
        if(i&8)
            dd++;
        ans=rec(i+1,zz,xx,cc,dd,b+1)|rec(i+1,z,x,c,d,b);
    }
    else{
        ans=rec(i+1,z,x,c,d,b);
    }
    dp[i][z][x][c][d]=ans;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    ll a;
    ll e=1,w;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<n;i++){
        e=1;
        w=0;
        for(ll j=0;j<k;j++){
            cin>>a;
            w+=a*e;
            e*=2;
        }
        v[w]=1;
    }
    ll ans=rec(0,0,0,0,0,0);
    if(ans)
        cout<<"YES";
    else cout<<"NO";

    return 0;
}

