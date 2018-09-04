#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define X first
#define Y second
#define SCD(a) scanf("%d",&a)
#define SCD2(a,b) scanf("%d %d",&a,&b)
#define SCLL(a) scanf("%lld",&a)
#define SCLL2(a,b) scanf("%lld %lld",&a,&b)
#define PRD(a) printf("%d\n",a)
#define PRLL(a) printf("%lld\n",a)
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz(v) ((int)v.size())
#define all(v) v.begin(),v.end()
#define endl "\n"
#define MEMO memset(memo,-1,sizeof memo)
#define SP setprecision
#define hafo GodessOfHope
#define TEST int test; cin>>test; for (int Test=1;Test<=test;Test++)
using namespace std;
 
const double PI = acos(-1.0);
const double EPS = 1e-6;
const int infi = (int)1e9;
const long long infl = (long long)1e17;
const int MOD = (int) 1e9+7;
const int MAX = (int) 1e7+9;
const int dx[] = {1,-1,0,0,1,1,-1,-1};
const int dy[] = {0,0,-1,1,1,-1,1,-1};
const int kdx[] ={1,1,-1,-1,2,2,-2,-2};
const int kdy[] ={2,-2,2,-2,1,-1,1,-1};
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <vi> vvi;
typedef vector <vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<vpii> vvpii;

ll n,x,q,l,r;
ll a[MAX];
ll cum[MAX];
bool visit[MAX];

void init(){
	for (int i=2;i<=1e7;i++){
		cum[i] = cum[i-1] + a[i] * (!visit[i]);
		if (visit[i]) continue;
		for (int j=i+i;j<=1e7;j+=i){
			visit[j] = 1;
			cum[i] += a[j];
		}	
	}
}

int main(){speed;
	cin>>n;
	for (int i=1;i<=n;i++) {cin>>x; a[x]++;}
	init();
	cin>>q;
	//for (int i=2;i<=15;i++) cout<<cum[i]<<" "; cout<<endl;
	while (q--){
		cin>>l>>r;
		r = min(r,(ll)1e7);
		l = min(l,(ll)1e7);
		cout<<cum[r] - cum[l-1]<<endl;
	}
}
