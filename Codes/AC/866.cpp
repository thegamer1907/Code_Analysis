//submitted by HimJ
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
#define fr(i,s,e) for(i=s;i<e;i++)
#define be begin
#define ms(arr,val) memset(arr,val,sizeof(arr))
using namespace std;
int arr[]={1,2,1};
ll len[51];
int v,a=1;
int solve(ll n,ll k)
{
   if(n==0)
    return 1;
    if(k<=len[n-1])
        return solve(n-1,k);
    k-=len[n-1];
    if(k==1)
        return n+1;
    k-=1;
    return solve(n-1,k);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  int t=1;
 // cin>>t;
    while(t--){
            ll n,k;
            int i;
            len[0]=1;
            fr(i,1,51)
            len[i]=1+1ll*2*len[i-1];
            cin>>n>>k;
            cout<<solve(n,k);

  }
  return 0;
  }

