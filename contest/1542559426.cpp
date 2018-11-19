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

char c1, c2;
string s[N];
int n;

int main()
{
	//FIO
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	scanf("%c%c", &c1, &c2);
	
	scanf("%d", &n);	
	
	rep(i,0,n){
		cin >> s[i];
		if(s[i][0]==c1 and s[i][1]==c2){
			return 0 * puts("YES");
		}
	}
	
	rep(i,0,n){
		rep(j,0,n){
			if(s[i][1]==c1 and s[j][0]==c2){
				return 0 * puts("YES");
			}
		}
	}
	
	puts("NO");
	
	return 0;
}
