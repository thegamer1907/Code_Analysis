#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> v;



void dfs(int sum, int num, long long now) {
	if (num == 1) {
		v.push_back(now * 10 + sum);
		return;
	}
	for (int i = 0; i <= sum; i++) {
		dfs(sum - i, num - 1, now * 10 + i);
	}
}

int main(void) {
	
	
	
	for (int i = 2; i <= 10; i++) {
		for (int j = 1; j < 10; j++) {
			dfs(10 - j, i - 1, j);
		}
	}
	
	sort(v.begin(), v.end());
	int k;
	scanf("%d", &k);
	printf("%I64d", v[k - 1]);

	return 0;
}