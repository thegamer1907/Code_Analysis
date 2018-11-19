#include <bits/stdc++.h>
using namespace std;

typedef std::vector<int> vi;
typedef long long ll;
typedef std::vector<ll> vl;
typedef std::vector<std::vector<int> > vvi;
typedef std::pair<int, int> ii;
typedef std::pair<ll, ll> pll;
typedef std::vector<ii> vii;

// #define inchar          getchar_unlocked
// #define outchar(x)      putchar_unlocked(x)
// #define FIO

// template<typename T> void inpos(T &x){x=0;register T c=inchar();while(((c<48)||(c>57))&&(c!='-'))c=inchar();bool neg=false;if(c=='-')neg=true;for(;c<48||c>57;c=inchar());for(;c>47&&c<58;c=inchar())x=(x<<3)+(x<<1)+(c&15);if(neg)x=-x;}
// template<typename T> void outpos(T n){if(n<0){outchar('-');n*=-1;}char snum[65];int i=0;do {snum[i++]=n%10+'0';n/=10;}while(n);i=i-1;while(i>=0)outchar(snum[i--]);outchar('\n');}

#define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x.size()))
#define cnti(x) (__builtin_popcount(x)) //number of set bits in x
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x)) //position of leftmost bit from left 0 based indexing
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x)) //position of rightmost bit from right 0 based indexing
#define ctzl(x) (__builtin_ctzll(x))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
 
#define X first
#define Y second
#define INF 1E9
 
#define print(x) cout << #x << " = " << x << endl
#define printv(x) rep(i, 0, sz(x)) cout << #x << "[" << i << "] = " << x[i] << endl
#define mod 1000000007
#ifndef FIO
#define read(a) rep(i, 0, sz(a)) cin >> a[i]
#else
#define read(a) rep(i, 0, sz(a)) inpos(a[i]);
#endif

const int LIM = 263005; // array size limit

int main()
{
	cin.sync_with_stdio(false);
	int n;
	string pass;
	cin >> pass;
	cin >> n;
	string s1, s2;
	rep(i, 0, n)
	{
		string str;
		cin >> str;
		if(str.find(pass) != string::npos)
		{
			cout << "YES\n";
			return 0;
		}
		s1 += str[0];
		s2 += str[1];
	}
	if(((s2.find(pass[0]) != string::npos) and (s1.find(pass[1]) != string::npos)))
	{
		cout << "YES\n";
	}
	else
		cout << "NO\n";
}