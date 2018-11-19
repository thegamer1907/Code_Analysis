#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
#include <string>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
typedef long long mt;
#define rep(a, b, i) for(register mt i = a; i < b; ++i)
#define repe(a, b, i) for(register mt i = a; i <= b; ++i)
#define repd(a, b, i) for(register mt i = a; i > b; --i)
#define repde(a, b, i) for(register mt i = a; i >= b; --i)

#define N 1000021
#define M (1ll << 22)
#define INF 1000000000000000007//1e18 + 7
#define MOD 1000000007//1e9 + 7
#define EPS 1e-9

mt n, k;
mt d[4];
mt bits[16];
bool ok;
void convert(void) 
{
	mt bit = 0;
	rep(0, k, i)
		if (d[i])
			bit = bit | (1 << i);
	++bits[bit];
}

int main()
{
#ifdef _DEBUG	
	freopen("in.txt", "r", stdin);
#endif
	scanf("%I64d %I64d", &n, &k);
	rep(0, n, i) {
		rep(0, k, j)
			scanf("%I64d", d + j);
		convert();
	}
	if (bits[0])
		puts("YES");
	else {
		rep(1, 16, i)
		{
			if (bits[i])
			{
				rep(0, 16, j) 
					if ((!(i & j)) && bits[j]) {
						ok = true;
					}
			}
		}
		puts(ok ? "YES" : "NO");
	}


	return 0;
}