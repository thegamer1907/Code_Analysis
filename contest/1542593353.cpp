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
int n;
string x;
string s[200];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    cin>>x;
    cin>>n;
    bool ok=0;
    int c1=0,c2=0;
    rep(i,0,n){
        cin>>s[i];
        if(s[i]==x){
            ok=1;
        }
        if(s[i][1]==x[0]){
            c1++;
        }
        if(s[i][0]==x[1]){
            c2++;
        }
    }
    if(c1 and c2)ok=1;
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}