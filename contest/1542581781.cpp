#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long LL;

int n, K, sum[100];
vector <int> v;

bool Judge(int S)
{
	int cnt[6];
	memset(cnt, 0, sizeof(cnt));
	for (int t = 0; t < 16; t++) {
		if (S & (1 << t)) {
			int now = t;
			for (int i = 1; i <= 4; i++) {
				if (now & 1) cnt[i]++; else cnt[i]--;
				now >>= 1;
			}
		}
	}
	for (int i = 1; i <= 4; i++) 
		if (cnt[i] > 0) return false;
	return true;
}

void Prepare()
{
	v.clear();
	for (int S = 1; S < (1 << 16); S++)
		if (Judge(S)) v.push_back(S);
}

void Init()
{
	memset(sum, 0, sizeof(sum));
	for (int i = 1; i <= n; i++) {
		int now = 0;
		for (int j = 1; j <= K; j++) {
			int t;
			scanf("%d", &t);
			now = (now << 1) + t;
		}
		sum[now]++;
	}
}

void Solve()
{
	int tot = v.size();
	bool flag = false;
	for (int i = 0; i < tot; i++) {
		int S = v[i];
		flag = true;
		for (int t = 0; t < 16; t++)
			if (S & (1 << t)) {
				if (sum[t] == 0) flag = false;
			}
		if (flag) {
			//printf("%d\n", S);
			break;
		}
	}
	if (flag) printf("YES\n"); else printf("NO\n");
}

int main()
{
	Prepare();
	while (~scanf("%d%d", &n, &K)) {
		Init();
		Solve();
	}
	return 0;
}