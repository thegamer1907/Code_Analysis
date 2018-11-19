#include <bits/stdc++.h>
using namespace std;

#define fo(i,s,t) for(int i = s; i <= t; ++ i)
#define fd(i,s,t) for(int i = s; i >= t; -- i)
#define bf(i,s) for(int i = head[s]; i; i = e[i].next)
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
#define VI vector<int>
#define sf scanf
#define pf printf
#define fp freopen
#define SZ(x) ((int)(x).size())
#define IF_DEBUG 0
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
const int inf = 1<<30;
const ll INF = 1ll<<60;
const db Inf = 1e20;
const db eps = 1e-9;

void gmax(int &a,int b){a = (a > b ? a : b);}
void gmin(int &a,int b){a = (a < b ? a : b);}

char str[3], a[3];
bool pa, pb, pc;
int n;

int main()
{
	sf("%s",str);
	sf("%d",&n);
	fo(i,1,n)
	{
		sf("%s",a);
		if(a[0]==str[0]&&a[1]==str[1]) pa=true;
		if(a[1]==str[0])pb=true;
		if(a[0]==str[1])pc=true;
	}
	pb &= pc;
	if(pa||pb) printf("YES");
	else printf("NO");
	return 0;
}