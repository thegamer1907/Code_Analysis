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

mt h, m, s, t1, t2;
mt d[3];
bool test1(mt x) 
{
	return x < d[0] || x > d[2];
}

bool test2(mt x)
{
	return x > d[0] && x < d[1];
}

bool test3(mt x)
{
	return x > d[1] && x < d[2];
}

int main()
{
#ifdef _DEBUG	
	freopen("in.txt", "r", stdin);
#endif
	scanf("%I64d %I64d %I64d %I64d %I64d", &h, &m, &s, &t1, &t2);
	h = (h * 3600 + m * 60 + s) % (3600 * 12);
	m = (12 * (m * 60 + s)) % (3600 * 12);
	s = (s * 12 * 60) % (3600 * 12);
	t1 = (t1 % 12) * 3600;
	t2 = (t2 % 12) * 3600;

	d[0] = h;
	d[1] = m;
	d[2] = s;
	sort(d, d + 3);
	puts((test1(t1) && test1(t2)) ||
		(test2(t1) && test2(t2)) ||
		(test3(t1) && test3(t2)) ? "YES" : "NO");

	return 0;
}