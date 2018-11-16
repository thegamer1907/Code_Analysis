#include <vector>
#include <iostream>
#include <utility>
#include <assert.h>
#ifndef localsystem
#include <bits/stdc++.h>
#endif
#define fr(a,b,c) for(int a=b;a<c;a++)
#define X first
#define Y second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> Line;
const int ms = int(4e3)+100;
ll dp[ms][ms];
ll mod = 1e9 + 7;
ll go(int n,int k){
//cout<<n<<" "<<k<<endl;
    if(k==1){
        return n;
    }
    if(n==1)return 1;
    if(dp[n][k]>=0)return dp[n][k];
    ll ans = 0;
    fr(x,1,n+1){
        if(x>n)break;
        ans+=go(n/x,k-1);
    }
    dp[n][k]=ans%mod;
    return ans%mod;
}
int main(){
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    cout<<go(n,k)<<endl;
}