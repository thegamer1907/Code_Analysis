
/*******************************************************************
  author : touchme-o
 problem : Qualification Rounds
    time : 2017-10-05 20:35:34
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
int team[100010];
int n,k;
bool flag = false;
void DFS(int x,int t) {
	if(t==k) flag = max(flag , binary_search(team,team+n,x));
	else {
		if((x>>t)&1) DFS(x^(1<<t),t+1);
		else {
			DFS(x,t+1);
			DFS(x^(1<<t),t+1);
		}
	}
}
int main(int argc, char const *argv[])
{
	// freopen("data.in", "r", stdin);
	MEMx(team,0);
	flag = false;
	scanf("%d%d",&n,&k);
	Rep(i,n) {
		Rep(j,k) {
			int a;scanf("%d",&a);
			if(a==1) team[i]+=(1<<j);
		}
		if(team[i] == 0) flag = true;
	}
	if(!flag) sort(team,team+n);	
	for(int i = 0;i<n&& !flag;i++) DFS(team[i],0);
	puts(flag?"YES":"NO");
	return 0;
}
