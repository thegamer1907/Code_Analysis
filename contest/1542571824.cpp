/**
  * author : thegeniushead
**/
#include <bits/stdc++.h>
 
/*.....DEFINITIONS...... */
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define T() int tt; cin>>tt; while(tt--)
#define rep(i,start,lim) for(int i=start;i<lim;i++)
#define rep1(i,start,lim) for(int i=start; i<=lim; ++i)
#define repd(i,start,lim) for(int i=start;i>=lim;i--)
#define mp make_pair
#define pb push_back
#define lchild (2*node+1)
#define rchild (2*node+2)
#define ff first
#define ss second
#define br cout<<"\n"
#define MOD (1000000007LL)
#define all(v) (v).begin(), (v).end()
#define eps (1e-6)
#define sll(n) scanf("%lld", &n);
#define si(n) scanf("%d", &n);
#define what_is(x) cerr << #x << " is " << x << "\n";
#define infll 9e18
#define inf 1e9

using namespace std;
 
/*.....TYPEDEFS ....*/
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long double ld;
 
/*....USEFUL FUNCTIONS....*/
ll pwr(ll base, ll exp, ll mod=MOD){ll res=1; while(exp>0){if(exp%2){res=(res*base)%mod;}base=(base*base)%mod;exp/=2;}return res;}
ll gcd(ll a, ll b){ if(b==0)return a; else gcd(b, a%b);}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if (n%2==0||n%3==0)return false;for(int i=5; i*i<=n; i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
 
/*....I/O Functions...*/
inline string rs(){char x[1234567];scanf("%s", x);string s = x; return s;}
inline int ri(){int x; scanf("%d", &x);return x;}
inline long long rl(){long long x; scanf("%lld", &x); return x;}
 
/*---------Solution below this line --------*/
 
const int N = 123456;

int H, M, S, t1, t2;
double h, m, s;

int main()
{
	//FIO
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	scanf("%d %d %d %d %d", &H, &M, &S, &t1, &t2);
	
	t1 %= 12;
	t2 %= 12;
	if( t1 > t2) swap(t1, t2);
	
	vector<double> pos(3);
	
	H %= 12;
	
	h = H, m = M, s = S;
	
	h += (double) (m/60); 
	h += (double) (s/3600);
	m += (double) (s/60);
	m /= 5.0;
	s /= 5.0;
	
	pos[0] = h, pos[1] = m, pos[2] = s;
	
	sort(all(pos));
	
	int ans = 2;
	
	cerr << pos[0] << " " << pos[1] << " " << pos[2] << endl;
	
	for(auto x : pos){
		if (t1 < x and x < t2){
			--ans;
			break;
		}
	}
	for(auto x : pos){
		if(x > t2 or x < t1){
			--ans;
			break;
		}
	}
	
	puts(ans>0 ? "YES" : "NO");
	
	return 0;
}
