#include <iostream>
#include <cstdio>
#include<list>
#include<iomanip>
#include<cmath>
#include<queue>
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<stack>
#include<sstream>
#include <cstdlib>
#include<map>
#include<algorithm>
#include<iostream>
#include<set>
#include<utility>
#include<memory.h>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
#define ll  long long
#define pb push_back
#define sz(v)               ((int)((v).size()))
#define all(x)          (x).begin(),(x).end()
#define REP(i, v)       for(int i=0;i<sz(v);i++)
typedef pair<int,int> pii;
#define ios std::ios_base::sync_with_stdio(false);
using namespace std;

const int maxn = 1e5 + 5;
int n,grps;
ll DP[21][maxn];
int A[21][maxn];
const ll INF = 1LL << 52;
int arr[maxn];
int ind[maxn];
ll c[maxn];
ll f[maxn];
ll tot = 0;
int L = 1, R = 0;
ll cost(int l,int r) {
	while(l < L) tot += 1LL*f[arr[--L]]++;
	while(R < r) tot += 1LL*f[arr[++R]]++;

	while(l > L) tot -= 1LL*(--f[arr[L++]]);
	while(r < R) tot -= 1LL*(--f[arr[R--]]);
	return tot;
}
void fill(int grp,int L,int R,int LOP,int ROP)
{

	if(L > R) return;

	int mid = (L + R) >> 1;

	DP[grp][mid] = INF;


	for(int i = LOP ; i <= ROP ; ++i)
	{

		ll newCost = 1LL*DP[grp - 1][i] + 1LL*cost(i + 1,mid);

		if(newCost < DP[grp][mid])
		{
			DP[grp][mid] = newCost;
			A[grp][mid] = i;
		}
	}
	fill(grp,L,mid - 1,LOP,A[grp][mid]);
	fill(grp,mid + 1,R,A[grp][mid],ROP);
}

int main()
{

	scanf("%d %d",&n,&grps);

	for(int i = 1 ; i <= n ; ++i)
	{

		scanf("%d",&arr[i]);
	}
	for(int i = 1 ; i <= n ; ++i)
	{
		DP[1][i] = 1LL*cost(1,i);

		A[1][i] = 0;
	}

	for(int i = 2 ; i <= grps ; ++i)
	{
		fill(i,0,n,0,n);
	}

	printf("%lld\n",DP[grps][n]);
}
