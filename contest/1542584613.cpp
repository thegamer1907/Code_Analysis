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

int bitcount(int x)
{
	int c = 0;
	for(int i = 0; i < 16; ++i)
		c += (x >> i) & 1;
	return c;
}

bool is_win(int k, vector<int>& count)
{
	if(count[0] > 0)
		return true;

	for(int i = 0; i < k; ++i) {

		if(count[1 << i] == 0)
			continue;

		for(int b = 0; b < (1 << k); ++b) {

			int i_ans = (b >> i) & 1;

			if(i_ans == 1)
				continue;
			if(count[b] > 0)
				return true;
		}

		return false;
	}

	for(int b = 0; b < (1 << k); ++b) {

		if(bitcount(b) != 2)
			continue;

		int op = b ^ ((1 << k) - 1);

		if(min(count[b], count[op]) > 0)
			return true;
	}

	return false;
}

int main()
{
	vector<int> count;

	int n, k;

	scanf("%d%d", &n, &k);
	count.resize(1 << k);
	for(int i = 0; i < n; ++i) {
		int x = 0;
		for(int j = 0; j < k; ++j) {
			int temp;
			scanf("%d", &temp);
			x = (x << 1 | temp);
		}
		count[x] += 1;
	}

	bool ans = is_win(k, count);

	printf("%s\n", ans ? "YES" : "NO");



	return 0;
}

/* waffle */
