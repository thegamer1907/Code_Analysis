#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <functional>

using namespace std;

#define LL long long
const int INF = 0x3f3f3f3f;

int h, m, s, t1, t2;

int main()
{
	while (~scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2))
	{
		t1 *= 2;
		t2 *= 2;
		h *= 2;
		if (m != 0 || s != 0)
			h++;
		if (m % 5 != 0 || s != 0)
			m = m / 5 * 2 + 1;
		else
			m = m / 5 * 2;
		if (s % 5 != 0)
			s = s / 5 * 2 + 1;
		else
			s = s / 5 * 2;
		if (t1 > t2)
			swap(t1, t2);
		int flag = 0;
		if (t1 < h && h < t2 && t1 < m && m < t2 && t1 < s && s < t2)
			flag = 1;
		if((t1 > h || h > t2) && (t1 > m || m > t2) && (t1 > s || s > t2))
			flag = 1;
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}