/*Flow..................*/
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
#define pd(x) printf("%0.10lf\n",x);
#define pll(x) printf("%lld\n",(long long)x)
#define ps(x) printf("%s\n",x)
#define M 1000000009
#define B 100000007
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

const int N=1000005;
char a[N];
ll h[N],po[N],inv[N];
int len[N],lel=0;
int l;

ll find(int l,int r)
{
	if(l==0)
		return h[r];
	return ((h[r]-h[l-1]+M)*inv[l])%M;
}

int check(int le)
{
	ll x=find(0,le-1);
	for(int i=1;i+le-1<l-1;i++)
		if(find(i,i+le-1)==x)
			return 1;
	return 0;
}

int main()
{
   int i,j;
	ss(a);
	l=strlen(a);
	FOR(i,0,l)
	{
		if(i==0)
		{
			po[0]=1;
			inv[0]=1;
			h[0]=a[i]-'a'+1;
		}
		else
		{
			po[i]=(B*po[i-1])%M;
			inv[i]=power(po[i],M-2,M);
			h[i]=(h[i-1]+po[i]*(a[i]-'a'+1))%M;
		}
	}
	// FOR(i,0,l)
	// 	trace2(i,h[i]);
	for(int length=1;length<l;length++)
		if(find(0,length-1)==find(l-length,l-1))
			len[lel++]=length;
	// FOR(i,0,lel)
	// 	cout<<len[i]<<" \n"[i==lel-1];
	if(lel==0)
	{
		puts("Just a legend");
		return 0;
	}
	int lo=0,hi=lel-1,mid=(lo+hi)/2;
	while(lo<hi && lo!=mid)
	{
		if(check(len[mid]))
			lo=mid;
		else
			hi=mid-1;
		mid=(lo+hi)/2;
	}
	if(lo==0 && check(len[lo])==0)
	{
		puts("Just a legend");
		return 0;
	}
	if(check(len[hi]))
		mid=hi;
	FOR(i,0,len[mid])
		printf("%c",a[i]);
	puts("");
   return 0;
}
