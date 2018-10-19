/**************************************************************
    Problem: ????
    User: (team ina)   xiaodongc(little_Bear_c)
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:0 kb
    length:0 kb
    score: inf
****************************************************************/
//CLOCKS_PER_SEC
/*
A possible implementation
The first few steps are just BST routine
Node deletion algorithm
Specifically, we're going to have a search
And assume that the target node does exist
So we call the removeAt routine
Remove the node physically
Next, we're still going through a for cycle
Ancestral ancestors traversing deleted nodes
Please pay special attention to our starting point
The father of the deleted node
Instead of inserting it like that
It can start directly from its grandfather
Then, in the course of the whole traversal
Each of us discovers an unbalanced ancestor G
Make a proper rotation adjustment to the ancestor
The three nodes involved in rotation are still G
And the taller kid, P
And the higher grandson V down there
And whether it's unbalanced or rotated
We all need to update the height of this ancestor
You can see that in the worst case
Really need to do logn times
You might as well take the control logic of the previous insert operation
Make a contrast here
No, there's nothing
Tricks to terminate the traversal process ahead of time
Because in the worst case
We really need to leave everything behind
Deal with all generations of ancestors
Since then, we can successfully end the algorithm
And return
So far you may find out
Here's the rotation
We haven't given a specific implementation of it
It's exactly what we suggested
Single spin and double spin in that way?
Interestingly enough, the answer is negative
*/
using namespace std;
#include<bitset>
#include<deque>
#include<stdint.h>
#include<set>
#include<stack>
#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<ctime>
#include<map>
#define sqr(x) (x)*(x)
#define sort stable_sort
#define ll long long
#define mk make_pair
#define pb push_back
#define in insert
#define mtr(x,y,z) mk(mk(x,y),z)
#define fi first
#define se second
#define lch(x) ((x)<<1)
#define rch(x) (((x)<<1)|1)
#define all(x) (x).begin(),(x).end()
#define titose CLOCKS_PER_SEC
#define fpi(x) freopen(x,"r",stdin);
#define fpo(x) freopen(x,"w",stdout);
#define fprio fpi("in.txt");fpo("out.txt");
#define fast ios_base::sync_with_stdio(false);
void readi(int &x)
{
	int v=0,f=1;
	char c=getchar();
	while (!isdigit(c)&&c!='-') c=getchar();
	if (c=='-') f=-1; else v=v*10+c-'0';
	while (isdigit(c=getchar())) v=v*10+c-'0';
	x=v*f;
}
void readll(ll &x)
{
	ll v=0ll,f=1ll;
	char c=getchar();
	while (!isdigit(c)&&c!='-') c=getchar();
	if (c=='-') f=-1; else v=v*10+c-'0';
	while (isdigit(c=getchar())) v=v*10+c-'0';
	x=v*f;
}
void readc(char &x)
{
	char c;
	while ((c=getchar())==' ');
	x=c;
}
void writes(string s){puts(s.c_str());}
void writeln(){writes("");}
void writei(int x)
{
	if (x<0)
	{
		putchar('-');
		x=abs(x);
	}
	if (!x) putchar('0');
	char a[25];
	int top=0;
	while (x)
	{
		a[++top]=(x%10)+'0';
		x/=10;
	}
	while (top)
	{
		putchar(a[top]);
		top--;
	}
}
void writell(ll x)
{
	if (x<0)
	{
		putchar('-');
		x=abs(x);
	}
	if (!x) putchar('0');
	char a[25];
	int top=0;
	while (x)
	{
		a[++top]=(x%10)+'0';
		x/=10;
	}
	while (top)
	{
		putchar(a[top]);
		top--;
	}
}
inline long long inc(int &x){return ++x;}
inline long long inc(long long &x){return ++x;}
inline long long inc(int &x,long long y){return x+=y;}
inline long long inc(long long &x,long long y){return x+=y;}
inline double inc(double &x,double y){return x+=y;}
inline long long dec(int &x){return --x;}
inline long long dec(long long &x){return --x;}
inline long long dec(int &x,long long y){return x-=y;}
inline long long dec(long long &x,long long y){return x-=y;}
inline double dec(double &x,double y){return x-=y;}
inline long long mul(int &x){return x=((long long)x)*x;}
inline long long mul(long long &x){return x=x*x;}
inline long long mul(int &x,long long y){return x*=y;}
inline long long mul(long long &x,long long y){return x*=y;}
inline double mul(double &x,double y){return x*=y;}
inline long long divi(const int &x)
{
	long long ans,l,r,mid;
	ans=0;l=0;r=0x3fffffff;
	while (l<r)
	{
		mid=(l+r)/2;
		if (mid*mid<=x)
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid;
	}
	return ans;
}
inline long long divi(const long long &x)
{
	long long ans,l,r,mid;
	ans=0;l=0;r=0x3fffffff;
	while (l<r)
	{
		mid=(l+r)/2;
		if (mid*mid<=x)
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid;
	}
	return ans;
}
inline long long divi(int &x,long long y){return x/=y;}
inline long long divi(long long &x,long long y){return x/=y;}
inline double divi(double &x,double y){return x/=y;}
inline long long mod(int &x,long long y){return x%=y;}
inline long long mod(long long &x,long long y){return x%=y;}
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define piii pair<int,pii >
#define piipi pair<pii,int>
#define plll pair<ll,pll >
#define pllpl pair<pll,ll>
#define pqi priority_queue<int>
#define pql priority_queue<ll>
#define npqi priority_queue<int,vector<int>,greater<int> >
#define npql priority_queue<ll,vector<ll>,greater<ll> >
#define forup(i,x,y) if ((x)<=(y)) for ((i)=(x);(i)<=(y);(i)++)
#define fordo(i,x,y) if ((x)>=(y)) for ((i)=(x);(i)>=(y);(i)--)
#define rep(i,x) forup ((i),1,(x))
#define repd(i,x) fordo ((i),(x),1)
#define itr iterator
#define forwyx(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define NO {cout<<"NO";return 0;}
#define YES {cout<<"YES";return 0;}
#define y0 y000000000000000000000000000
#define y1 y111111111111111111111111111
#define j0 j000000000000000000000000000
#define j1 j111111111111111111111111111
#define cl0(a) memset((a),(0),(sizeof((a))))
#define clz(a) memset((a),(0x16),(sizeof((a))))
#define clf(a) memset((a),(-(0x16)),(sizeof((a))))
#define inf 0x3bbbbbbb
#define lnf 0x1bbbbbbbbbbbbbbbll
#define sqrt divi
#define p2(i) (1ll<<(i))
/*************************************************/
int n,m,i,j,ans,l,r,mid,d[100005],vis[100005],mp[100005];
struct tst
{
	int f,g,lst,id;
}a[100005];
bool cmpid(tst x,tst y)
{
	return x.id<y.id;
}
bool cmplst(tst x,tst y)
{
	return x.lst<y.lst;
}
bool check(int x)
{
	sort(a+1,a+m+1,cmpid);
	memset(vis,0,sizeof(vis));
	int i,j=1;
	rep(i,m)
	{
		a[i].lst=0;
		a[i].g=a[i].f;
	}
	rep(i,x)
	{
		vis[a[d[i]].lst]=0;
		a[d[i]].lst=i;
		vis[a[d[i]].lst]=d[i];
	}
	sort(a+1,a+m+1,cmplst);
	rep(i,m) mp[a[i].id]=i;
	rep(i,m) if (!a[i].lst) return 0;
	rep(i,x)
	{
		if (vis[i])
		{
			if (a[mp[vis[i]]].g>0) return 0;
		}
		else
		{
			while (j<=n&&a[j].g<=0) j++;
			a[j].g--;
		}
	}
	return 1;
}
int main()
{
	readi(n);
	readi(m);
	rep(i,n) readi(d[i]);
	rep(i,m)
	{
		readi(a[i].f);
		a[i].id=i;
	}
	l=0;r=n;ans=n+1;
	while (l<r)
	{
		mid=(l+r+1)/2;
		if (check(mid))
		{
			r=mid-1;
			ans=mid;
		}
		else l=mid;
	}
	if (ans>n) cout<<-1; else cout<<ans;
	return 0;
}