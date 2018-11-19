#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;


typedef long long i64;
const int inf = (int)1.05e9;


int main()
{
	int n;
	char ans[24];
	char ws[1000][24];

	scanf("%s%d", ans, &n);
	for(int i = 0; i < n; ++i)
		scanf(" %s", ws[i]);

	bool ok = false;

	for(int i = 0; i < n; ++i) {
		if(ans[0] == ws[i][0] && ans[1] == ws[i][1])
			ok = true;
	}

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if(ans[0] == ws[i][1] && ans[1] == ws[j][0])
				ok = true;
		}
	}

	printf("%s\n", ok ? "YES" : "NO");

	return 0;
}

/* waffle */
