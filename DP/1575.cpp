#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair

set<tuple<int,int,int>> s;
vector<ll>v[200005];
vector<ll>sum1[200005];
ll mod=1e9+7;

ll a[200005];
ll b[200005];
ll idx[100005];
ll cnt[200005];
ll start[200005];
ll end[200005];
queue<tuple<ll, ll, ll>> q;

ll ceil1(ll a, ll b){
  if(a%b!=0)return a/b+1;
  else return a/b;
}
ll power(ll a,ll b,ll n){ll ans=1;while(b>0){if(b%2==1)ans=(ans*a)%n;a=(a*a)%n;b/=2;}return ans;}
map<string,ll>m1;
map<ll,ll>m;
set<ll>s1[200005];
set<pair<ll,ll>>s2;
set<int> s3;
ll pre[100005];
pair<ll,ll> p[100005];
ll count1=0;

void dfs(ll u){
  count1++;
  cnt[count1]=u;
  a[u]=count1;
  for(int i:s1[u]){
    dfs(i);
  }
  b[u]=count1;
}



int main(){
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #else
    #endif
    ll n;
    cin>>n;
    ll cnt=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==0){
        a[i]=1;
      }
      else{
        a[i]=-1;
        cnt++;
      }
    }
    ll max1=a[0];
    ll max2=a[0];

    for(int i=1;i<n;i++){
      
      max2=max(a[i],max2+a[i]);
      max1=max(max1,max2);
     // cout<<max1<<" "<<max2<<endl;
    }
    cout<<cnt+max1;

  return 0;
}