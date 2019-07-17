#include <map>
#include <set>
#include <ctime>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
#define spause() system("pause")

using namespace std;
typedef long long llong;
typedef pair<int, int> prdd;

llong n, m, k, ok, nk, ans;
llong ms[120000];

int main()
{
	scanf("%lld%lld%lld", &n, &m, &ok);
	for (llong i = 0; i < m; i++)
		scanf("%lld", &ms[i]);
	k = nk = ok;
	while (true)
	{
		llong dn = upper_bound(ms, ms + m, nk) - ms;
		
		if (dn > nk - k)
			ans++;
		else if (dn >= m)
			break;
		else
			k = ((ms[dn] - dn) / ok + bool((ms[dn] - dn) % ok)) * ok;
		nk = k + dn;
	}

	printf("%lld", ans);
	//spause();
	return 0;
}