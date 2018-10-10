#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<long long, long long> pll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<pair<ll,ll> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;

#define PI 3.141592653589793
#define mod 1000000007
#define M 1000006
# define N 100005
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
# define INF 10000000000000000

ll cntb,cntc,cnts;
ll nb,ns,nc;
ll pb,ps,pc;
ll p;
bool check(ll mid)
{
	ll p1=0,p2=0,p3=0;
	ll inb=INF,inc=INF,ins=INF;
	ll lb=0,ls=0,lc=0;
	if(cntb>0)
	{
		 inb=(nb/cntb);
	    lb=(nb%cntb);
	   
	}
	if(cntc>0)
	{
		 inc=(nc/cntc);
	 lc=(nc%cntc);
	
	}
	if(cnts>0)
	{
		 ins=(ns/cnts);
	 ls=(ns%cnts);
	}
	ll in=min(inb,min(inc,ins));
	//trace4(inb,inc,ins,in);
	mid=max(0LL,mid-in);
	if(cntb>0)
	{
		inb-=in;
       lb+=(inb*cntb);
       ll rb=(mid*cntb);
       rb=max(0LL,rb-lb);
        p1=(rb*pb);

	}
	if(cntc>0)
	{
		inc-=in;
		lc+=(inc*cntc);
	    ll rc=(mid*cntc);
	    //rc-=lc;
	    rc=max(0LL,rc-lc);
	     p2=(rc*pc);
	}
	if(cnts>0)
	{
		ins-=in;
		ls+=(ins*cnts);
		ll rs=(mid*cnts);
		//rs-=ls;
		rs=max(0LL,rs-ls);
		 p3=(rs*ps);
		
	}
	
	ll pf=p1+p2+p3;
	//trace3(p1,p2,p3);
	//trace3(mid,pf,p);
	return (pf<=p);


}

int main()
{
	IOS;
	string s;
	cin >> s;
	int l=s.length();
	//trace1(l);
	for(int i=0;i<l;i++)
	{
		if(s[i]=='B') cntb++;
		if(s[i]=='C') cntc++;
		if(s[i]=='S') cnts++;
 	}

 	cin >> nb >> ns >> nc;
 	cin >> pb >> ps >> pc;
 	cin >> p;
 	ll lo=0;
 	ll hi=10000000000000;
 	ll ans=0;
 	while(hi>=lo)
 	{
 		ll mid=(hi+lo)/2;
 		//trace3(lo,hi,mid);
 		if(check(mid))
 		{
 			ans=mid;
 			//trace1(ans);
          lo=mid+1;
 		}
 		else
 		{
 			hi=mid-1;
 		}
 	}

 	cout << ans;

	
}