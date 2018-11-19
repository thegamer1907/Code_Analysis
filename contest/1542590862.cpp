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

mt n;
char a[10], b[10];
bool u[256][2];
bool ok;
int main()
{
#ifdef _DEBUG	
	freopen("in.txt", "r", stdin);
#endif
	scanf("%s", a);
	scanf("%I64d", &n);
	rep(0, n, i) {
		scanf("%s", b);
		if (!strcmp(a, b))
			ok = true;
		else u[b[0]][0] = true, u[b[1]][1] = true;
	}
	if (!ok) {
		if (u[a[0]][1] && u[a[1]][0])//n = 2
			ok = true;
	}
	puts(ok ? "YES" : "NO");
	return 0;
}