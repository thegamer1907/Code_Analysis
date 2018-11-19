
/*******************************************************************
  author : touchme-o
 problem : Race Against Time
    time : 2017-10-05 20:00:48
 *******************************************************************/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <time.h>
#include <limits.h>
#include <assert.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
#include <vector>
using namespace std;

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define For(i,n) for(int i=1;i<=n;i++)
#define Fork(i,k,n) for(int i=k;i<=n;i++)
#define Rep(i,n) for(int i=0;i<n;i++)
#define ForD(i,n) for(int i=n;i;i--)
#define ForkD(i,k,n) for(int i=n;i>=k;i--)
#define RepD(i,n) for(int i=n;i>=0;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
#define Pr(kcase,ans) printf("Case #%d: %lld\n",kcase,ans);
#define PRi(a,n) For(i,n-1) cout<<a[i]<<" "; cout<<a[n]<<endl;
#define lowbit(x) ((x)&-(x))
#define SI(a) ((a).size())
#define MEM(a) memset(a,0,sizeof(a));
#define MEMI(a) memset(a,0x3f,sizeof(a));
#define MEMi(a) memset(a,128,sizeof(a));
#define MEMx(a,b) memset(a,b,sizeof(a));
#define MAX 35
#define INF (0x3f3f3f3f)
#define F (1000000007)
#define LL long long
int vis[125];
int main(int argc, char const *argv[])
{
	// fstream cin("data.in");
	MEM(vis);
	int  h, m, s, t1, t2 ;
	cin >> h >> m >> s >> t1 >> t2;
	if(h==12) h = 0;
	if(m == 0 && s == 0) vis[10*h] = 1;
	else vis[10*h+5] = 1;
	if(s == 0 ) vis[2*m] = 1 ;
	else vis[2*m+1] = 1;
	vis[2*s] = 1 ;
	if(t1>t2) swap(t1,t2);
	t1*=10 , t2*=10;
	bool flag = true;
	for(int i = t1 ; i <= t2 ; i ++ ) if(vis[i]) {
		flag = false ; break;
	}
	if(flag) return 0*puts("Yes");
	flag = true;
	for(int i = t2 ; i <= 120 ; i++ ) if(vis[i]) {
		flag = false ; break;
	}
	for(int i = 0 ; i <= t1 ; i ++) if(vis[i]) {
		flag = false ; break;
	}
	if(flag) return 0*puts("Yes");
	return 0*puts("No");
}
