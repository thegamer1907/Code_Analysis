#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <string>
#define INF 0x3f3f3f3f
#define eps 1e-8
#define SIZE (200000+10)
#define Ri(a) scanf("%d", &a)
#define Rl(a) scanf("%I64d",&a)
#define Rf(a) scanf("%lf", &a)
#define Rs(a) scanf("%s", a)
#define Pi(a) printf("%d\n", (a))
#define Pf(a) printf("%lf\n", (a))
#define Pl(a) printf("%I64d\n", (a))
#define Ps(a) printf("%s\n", (a))
#define xx first
#define yy second
#define CLR(a, b) memset(a, (b), sizeof(a))
#define INT_MAX 2147483647
#define LL_MAX 9223372036854775807
#define ll __int64
#define lson l, mid, rt<<1
#define rson mid+1, r, rt<<1|1
#define PI acos(-1.0)
const ll MOD = 1000000007;
using namespace std;
int cnt[1024];
int main()
{
	int n;
	Ri(n);
	int k;
	Ri(k);
	for (int i = 1; i <= n; i++)
	{
		int x;
		int tmp = 0;
		for (int j = 0; j < k; j++)
		{
			Ri(x);
			tmp <<= 1;
			tmp += x;
		}
		cnt[tmp] = 1;
	}
	int flag = 0;
	for(int j = 0; j < (1<<k); j++)
		for (int i = 0; i < (1 << k); i++)
		{
			if (cnt[i] && cnt[j] && (i&j) == 0)
				flag = 1;
		}
	if (flag) puts("yes");
	else
	{
		puts("no");
	}
	return 0;
}