/*One Ring to rule them all, One Ring to find them,
  One Ring to bring them all, and in the darkness bind them*/
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <functional>
#include <list>
#include <deque>
#include <bitset>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <sstream>
#include <complex>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <climits>
#include <utility>
#include <ctime>
#include <tuple>
#include <fstream>
#include <cctype>
#define FOR(i,a,n) for(i=a;i<n;i++)
#define FORD(i,a,n) for(i=a;i>=n;i--)
#define FORS(i,a) for(i=0;a[i];i++)
#define si(x) scanf("%d",&x)
#define sc(x) cin>>x
#define sd(x) scanf("%lf",&x)
#define sll(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define prs(x) printf("%d ",x)
#define pls(x) printf("%lld ",(long long)x)
#define pc(x) printf("%c",(char)x)
#define pi(x) printf("%d\n",x)
#define pd(x) printf("%lf\n",x);
#define pll(x) printf("%lld\n",(long long)x)
#define ps(x) printf("%s\n",x)
#define M 1000000007
#define ll long long
#define mp make_pair
#define all(x) x.begin(),x.end()
#define pb push_back
#define fr first
#define se second
#define in insert
#define er erase
#define pii pair<int, int>
#define plll pair<long long, long long>
#define tr(x,it) for(auto it : x)
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230
#define bs(x,y,z,w) {cerr<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<" "<<#w<<"="<<w<<endl;}
#define trace(x) {cerr << #x << "=" << x <<endl;}
#define trace2(x, y) {cerr << #x << "=" << x << " " << #y << "=" << y <<endl;}
#define trace3(x, y, z) {cerr << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;}
using namespace std;
template <typename T> ostream& operator<<(ostream& os, const vector<T> &p){os << "[ "; for (T x: p) os << x << " "; os << "]" << endl; return os;}
template <typename T> ostream& operator<<(ostream& os, const set<T> &p){os << "{ "; for (T x: p) os << x << " "; os << "}" << endl; return os;}
template <typename T> ostream& operator<<(ostream& os, const multiset<T> &p){os << "{ "; for (T x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const map<Tk, Tv> &p){os << "{ "; for (pair<Tk, Tv> x: p) os << x << " "; os << "}" << endl; return os;}
template <typename Tk, typename Tv> ostream& operator<<(ostream& os, const pair<Tk, Tv> &p){os << "{" << p.first << ',' << p.second << "}";return os;}
ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n&1) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n&1) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

const int N=1e7+4;
int p[N],c[N];
set<int> s;

void sieve()
{
	ll i,j;
	for(i=2;i<N;i+=2)
		p[i]=2;
	for(i=3;i<N;i+=2)
		if(p[i]==0)
		{
			p[i]=i;
			for(j=i*i;j<N;j+=(2*i))
				if(p[j]==0)
					p[j]=i;
		}
}

int main()
{
   int i,j;
   int n;
   si(n);
   sieve();
   FOR(i,1,n+1)
	{
		si(j);
		s.clear();
		while(j!=1)
		{
			s.in(p[j]);
			j/=p[j];
		}
		tr(s,it)
			c[it]++;
	}   
	FOR(i,1,N)
		c[i]+=c[i-1];
	int m;
	si(m);
	FOR(i,1,m+1)
	{
		int l,r;
		si(l),si(r);
		r=min(r,N-4);
		if(l>r)
		{
			puts("0");
			continue;
		}	
		pi(c[r]-c[l-1]);
	}
   return 0;
}
