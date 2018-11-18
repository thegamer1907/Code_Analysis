#include <bits/stdc++.h>

#define mp make_pair
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef vector < int > VII;

const int MN = 100005, inf = 1000000005, MOD = 1000000007;
const LL INF = 1000000000000000005LL;

int ile[MN], co[MN];
LL dp[2][MN];

LL koszt;

int n;

inline void wrzuc(int x)
{
	x = co[x];
	koszt += ile[x];
	++ile[x];
}

inline void wyrzuc(int x)
{
	x = co[x];
	--ile[x];
	koszt -= ile[x];
}

struct prze
{
	int a, b, p, k;
};

queue < prze >  Q[2];

void licz(int s)
{
	Q[0].push({1, n, 1, n});
	int c = 0;
	while(!Q[c].empty())
	{
		int pocz = 0, kon = 0;
		for(int i = 1; i <= n; ++i)
			ile[i] = 0;
		koszt = 0LL;
		while(!Q[c].empty())
		{
			prze cur = Q[c].front();
			Q[c].pop();
			int mid = (cur.a + cur.b) >> 1;
			int ide = min(cur.k, mid);
			//assert(kon <= mid);
			while(kon < mid)
			{
				++kon;
				wrzuc(kon);
			}
			while(pocz < cur.p - 1)
			{
				++pocz;
				wyrzuc(pocz);
			}
			dp[s][mid] = INF;
			int cut;
			while(pocz < ide)
			{
				//printf("%d %d %d %lld\n", pocz, kon, mid, koszt);
				if(dp[s ^ 1][pocz] + koszt < dp[s][mid])
				{
					cut = pocz + 1;
					dp[s][mid] = dp[s ^ 1][pocz] + koszt;
				}
				++pocz;
				wyrzuc(pocz);
			}
			while(pocz >= cur.p)
			{
				wrzuc(pocz);
				--pocz;
			}
			if(cur.a < mid)
				Q[c ^ 1].push({cur.a, mid - 1, cur.p, cut});
			if(cur.b > mid)
				Q[c ^ 1].push({mid + 1, cur.b, cut, cur.k});
		}
		c ^= 1;
	}
	
}

int main()
{
	int k;
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; ++i)
		scanf("%d", &co[i]);
	for(int i = 1; i <= n; ++i)
		dp[0][i] = INF;
	for(int i = 1; i <= k; ++i)
		licz(i & 1);
	printf("%lld", dp[k & 1][n]);
	return 0;
}
