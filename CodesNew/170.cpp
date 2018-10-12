#pragma GCC optimize("O3")
#include<bits/stdc++.h>

#define IOS ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MOD 1000000007
#define MAX 100005
#define ll long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();container.end();it++)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb push_back
#define vi vector<int>
#define vpii vector<pii>
#define vll vector<ll>
#define clr(x) memset(x,0,sizeof(x))
#define endl '\n'
#define fore(i,n) for (int i = 0; i < int(n); ++i)
#define INF 1e10
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);

using namespace std;

void io(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

ll fast_exp(ll base,int exp,int m){      //using spread property of modulus
  ll res=1;
  while(exp>0){
    if(exp%2==1){
      res=(res*base)%m;             //because exp/2 counts for odd also
    }
    base=(base*base)%m;
    exp/=2;
  }
  return res%m;
}


ll siz[MAX];
ll brr[MAX];
ll crr[MAX];

map<ll,ll> mp;

ll ans=0;

ll vis[100005];
vector<ll> adj[100005];

ll dp[2001][4];
//check corner cases mostly 0's and 1's

void solve(ll n,ll k){
  ll siz=pow(2,n);
  if(k==(siz/2)){
    cout<<n<<endl;return;
  }else{
    n--;
    if(k<(siz/2)){
      solve(n,k);
    }else{
      solve(n,k-(siz/2));
    }
  }
}

int main(){
io();IOS;
    
    ll n,k;cin>>n>>k;
    solve(n,k);
    
    

    
  
    

    
}
    