using namespace std;
#include<deque>
#include<algorithm>
#include<stdint.h>
#include<set>
#include<stack>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<map>
#include<cstdlib>
#include<ctime>
#include<list>
#define sqr(x) (x)*(x)
#define sort stable_sort
#define ll long long
#define mp make_pair
#define pb push_back
#define in insert
#define mtr(x,y,z) mp(mp(x,y),z)
#define fi first
#define se second
#define lch(x) ((x)<<1)
#define rch(x) (((x)<<1)|1)
#define all(x) (x).begin(),(x).end()
#define fpi(x) freopen(x,"r",stdin);
#define fpo(x) freopen(x,"w",stdout);
#define fprio fpi("in.txt");fpo("out.txt"):
#define fast ios::sync_with_stdio(false);
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
/*************************************************/
int n,m,i,j,res[222];
string s1[222],s2[222],s[222];
bool check(string s,int x)
{
	int i,j;
	for (i=0;i<(1<<x);i++)
	{
		string t;
		for (j=0;j<x;j++)
		{
			t.push_back('0'+(bool)((1<<j)&i));
			if (((int)s.find(t))==-1) return 0;
		}
	}
	return 1;
}
int main()
{
	fast;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		 cin>>s[i];
		 s1[i]=s[i].substr(0,1000);
		 s2[i]=s[i].substr(0,1000);
		 while (check(s[i],res[i]+1)) res[i]++;
	}
	cin>>m;
	for (i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		s1[n+i]=s1[x]+s1[y];
		s2[n+i]=s2[x]+s2[y];
		reverse(all(s2[n+i]));
		s1[n+i]=s1[n+i].substr(0,1000);
		s2[n+i]=s2[n+i].substr(0,1000);
		reverse(all(s2[n+i]));
		while (check(s2[x]+s1[y],res[i+n]+1)) res[i+n]++;
		cout<<(res[n+i]=max(res[n+i],max(res[x],res[y])))<<endl;
	}
//	for (i=1;i<=n+m;i++) cout<<s1[i]<<' '<<s2[i]<<endl;
	return 0;
}