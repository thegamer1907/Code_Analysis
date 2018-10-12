#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define MOD 10000000079
#define mod(a) (a)%MOD
#define pb push_back
#define ft first
#define sd second
#define all(v) v.begin(),v.end()
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
ll gcd(ll a,ll b){if(a==0) return b; return gcd(b%a,a);}
ll powm(ll base,ll exp,ll mod=MOD) {base%=mod;ll ans=1;while(exp){if(exp&1LL) ans=(ans*base)%mod;exp>>=1LL,base=(base*base)%mod;}return ans;}

int a[4];
ll nb,ns,nc;
ll pb,ps,pc;

ll price(ll n){
     ll cost=0;
     cost+=max(0LL,(n*a[1]-nb)*pb);
     cost+=max(0LL,(n*a[2]-ns)*ps);
     cost+=max(0LL,(n*a[3]-nc)*pc);
     return cost;

}
int main(){
     sync;
     string s;cin>>s;
     for(int i=0;i<s.length();i++){
          if(s[i]=='B')
          	  a[1]++;
          else if(s[i]=='S')
               a[2]++;
           else a[3]++;
     }
     cin>>nb>>ns>>nc;
     cin>>pb>>ps>>pc;
     ll R;cin>>R;
     ll l=0,r=(1LL<<50);
     while(l<r){

          ll mid=(1+l+r)/2;

          ll c=price(mid);
          if(c<=R)
          	l=mid;
          else
          	r=mid-1;
     }
     cout<<l<<endl;
}
