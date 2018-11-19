
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
void judge(int x) {
    int ans = 0;
    int ub = n, lb = 0;
    while (ub >= lb) {
        int mid = (ub + lb)/2;
        if (team[mid] >= x) {
            ans = mid;
            ub = mid - 1;
        }   
        else lb = mid + 1;
    }
    if (team[ans] == x)  flag = true;
}
void dfs(int x, int t) {
    if (t == k) {judge(x);}
    else {
        if ((x>>t)&1)  dfs(x^(1<<t), t+1);
        else {
            dfs(x, t+1); dfs(x^(1<<t), t+1);
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
		int res = 0;
		Rep(j,k) {
			int xx;scanf("%d",&xx);
			if(xx==1) res += 1<<j;
		}
		if(res == 0) flag = true;
		team[i] = res;
	}
	sort(team,team+n);
	for(int i = 0; i<n; i ++ ) dfs(team[i],0);
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
