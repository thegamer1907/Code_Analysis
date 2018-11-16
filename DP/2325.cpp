#include<bits/stdc++.h>
using namespace std;
#define ll int
#define Endl endl
#define mod  8
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)
ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};
bool isvalid(ll x,ll y,ll n,ll m){
    return (x>=0&&x<n&&y>=0&&y<m);
}
ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}
// struct gg{
//   ll first;
//   ll sec;
// };
// gg ap[100011];

// bool fun(gg x, gg y){
//   return x.first<y.first;
// }
ll dp1[10],dp2[10];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,l,r,q,kk,x,y,c,m,p,n,k;
    string s;
    cin>>s;

    ll val;

    for(i=0;i<s.size();i++){
      if(s[i]=='0'||s[i]=='8'){
        cout<<"YES"<<endl;
        cout<<s[i];
        return 0;
      }
    }

    s = "00" + s;

    reverse(s.begin(),s.end());

    for(i=1;i<=s.size();i++){
      if(i>2){
        ll digit = (s[i-1]-'0');
        digit = (100*digit)%mod;
        ll rem = (mod - digit);
        // cout<<rem<<" ";
        for(j=0;j<mod;j++){
          for(k=0;k<mod;k++){
            if(rem == mod){
              val = j+k;
            }else{
              val = (j+k)%mod;
            }
            if(dp1[k]&&dp2[j]&&dp2[j]>dp1[k]&&(val == rem)){
              // cout<<j<<" "<<k<<" ";
              cout<<"YES"<<Endl;
              if(s[i-1]=='0'){
                cout<<s[dp2[j]-1]<<s[dp1[k]-1];
              }else{
                cout<<s[i-1]<<s[dp2[j]-1]<<s[dp1[k]-1];
              }
              return 0;
            }
          }
        }
        digit = (s[i-1]-'0');
        if(dp1[digit%mod]==0){
          // cout<<"SE";
          dp1[digit%mod] = i;
        }
        // cout<<digit<<" ";
        dp2[(digit*10)%mod] = i;
      }else if(i==1){
        ll digit = (s[i-1]-'0')%mod;
        dp1[digit] = i;
      }else{
        if(dp1[0]){
          cout<<"YES"<<endl;
          cout<<s[dp1[0]-1];
          return 0;
        }
        ll digit = (s[i-1]-'0');
        if(dp1[digit%mod]==0)
          dp1[digit%mod] = i;
        digit = (digit*10)%mod;
        dp2[digit] = i;
      }
    }
    cout<<"NO";
return 0;
}