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
ll n,m,i,j,dp[10000005];
bool p[10000005];
vector<int> v,cnt,v2;
int main()
{
	readll(n);
	rep(i,n)
	{
		ll x;
		readll(x);
		dp[x]++;
	}
	forup(i,2,10000000)
	{
		if (!p[i]) v.pb(i);
		for (j=0;j<v.size()&&i*v[j]<=10000000;j++)
		{
			p[i*v[j]]=1;
			if (i%v[j]==0)
			{
				break;
			}
		}
	}
	//forwyx(it,v) cout<<*it<<' ';cout<<endl;
	forup(i,2,10000000)
	{
		if (p[i]) continue;
		for (j=2;i*j<=10000000;j++)
		{
			dp[i]+=dp[i*j];
			//if (i==v[j]) dp[v[j]]+=dp[i*v[j]];
		}
		cnt.pb(dp[i]);
	}
	for (i=1;i<cnt.size();i++) cnt[i]+=cnt[i-1];
	readll(m);
	//forwyx(it,cnt) cout<<*it<<' ';cout<<endl;
	//forwyx(it,v2) cout<<*it<<' ';cout<<endl;
	while (m--)
	{
		ll l,r;
		readll(l);
		readll(r);
		l=lower_bound(all(v),l)-v.begin()-1;
		r=upper_bound(all(v),r)-v.begin()-1;
		writell((r>=0?cnt[r]:0)-(l>=0?cnt[l]:0));
		writeln();
	}
	return 0;
}