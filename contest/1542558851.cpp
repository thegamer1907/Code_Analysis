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

#define N 1021
#define K 11ll
#define M (1ll << 22)
#define INF 10000000000000007//1e16 + 7
#define MOD 1000000007//1e9 + 7
#define EPS 1e-9

mt n;
bool dp[N][K][1ll << K];
mt dpc[N][K];
char s[N][2][K + 1];
char ts[N];

mt setBit(mt bit, mt i)
{
	return bit | (1ll << i);
}

mt getBit(mt i, mt k, const char *ms) 
{
	mt bit = 0;
	rep(0, k, j)
		if (ms[i + k - 1 - j] == '1')
			bit = setBit(bit, j);
	return bit;
}

void init(mt i) 
{
	mt ln = strlen(ts);
	memcpy(s[i][0], ts, min(K, ln));
	//s[i][0][min(K, ln)] = 0;
	memcpy(s[i][1], ts + max(0ll, ln - K), min(K, ln));
	//s[i][1][min(K, ln)] = 0;
	mt d = min(K, ln);
	repe(1, d, j) {
		repe(0, ln - j, k) {
			mt bit = getBit(k, j, ts);
			if (!dp[i][j][bit])
				++dpc[i][j];
			dp[i][j][bit] = true;
		}
	}
	dpc[i][0] = 1;
}

void cont(mt i, mt j) 
{
	repe(1, K, k)
		rep(0, (1ll << k), bit) {
		if (dp[i][k][bit] | dp[j][k][bit])
			++dpc[n][k];
		dp[n][k][bit] = dp[i][k][bit] | dp[j][k][bit];
	}
	mt ln_l = strlen(s[i][1]), ln_b = strlen(s[j][0]);
	memcpy(ts, s[i][1], ln_l);
	memcpy(ts + ln_l, s[j][0], ln_b);
	mt ln = min(K, ln_l + ln_b);
	mt lnp = ln_l + ln_b;
	ts[lnp] = 0;
	repe(1, ln, d) {
		repe(0, lnp - d, k) {
			mt bit = getBit(k, d, ts);
			if (!dp[n][d][bit])
				++dpc[n][d];
			dp[n][d][bit] = true;
		}
	}
	dpc[n][0] = 1;
	mt dln = strlen(s[i][0]);
	if(dln == K) memcpy(s[n][0], s[i][0], strlen(s[i][0]));
	else memcpy(s[n][0], ts, ln);

	dln = strlen(s[j][1]);
	if(dln == K) memcpy(s[n][1], s[j][1], strlen(s[j][1]));
	else memcpy(s[n][1], ts + max(lnp - K, 0ll), ln);
}

mt getAnsw(mt i) // fl down
{
	mt answ = 0;
	repe(1, K, k)
		if (dpc[i][k] == (1ll << k)) answ = k;
	return answ;
}

int main()
{
#ifdef _DEBUG	
	freopen("in.txt", "r", stdin);
#endif
	scanf("%I64d", &n);
	rep(0, n, i)
		scanf("%s", ts), init(i);
	mt m = 0;
	scanf("%I64d", &m);
	while (m--) 
	{
		mt l, r;
		scanf("%I64d %I64d", &l, &r);
		cont(--l, --r);
		printf("%I64d\n", getAnsw(n++));
	}
	return 0;
}