#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz(a) int((a).size())
#define F first
#define S second

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define per(i, a, b) for(int i = a; i >= b; --i)
#define travel(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define INDEX(arr,ind)          (lower_bound(all(arr),ind)-arr.begin())

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef pair<ll,ll> pll;
typedef pair<int, pii> piii;
typedef pair<ll, pll> plll;
typedef vector<pii> vpii;
typedef vector<piii> vpiii;

inline ll powmod(ll x, ll n, ll _mod){ 
  ll res = 1; 
  while (n){
    if (n & 1)res = (res*x) % _mod; 
    x = (x*x) % _mod; 
    n >>= 1;
    }
    return res; 
  }

#define N 100005
int n,k;
map<int,int> m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    cin>>n>>k;
    rep(i,0,n){
        int x=0;
        rep(j,0,k){
            int y;
            cin>>y;
            if(y==1)x|=(1<<j);
        }
        m[x]++;
    }
    
    vi v;
    travel(m,itr){
        v.pb((*itr).F);
    }
    rep(i,0,sz(v)){
        //cout<<v[i]<<endl;
        rep(j,i+1,sz(v)){
            if((v[i]&v[j])==0){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    // int cnt=0;
    // if(m[1])cnt++;
    // if(k>=2 and m[2])cnt++;
    // if(k>=3 and m[4])cnt++;
    // if(k>=4 and m[8])cnt++;
    // if(cnt>1)ok=1;
    
    bool ok=0;
    if(m[0])ok=1;
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}