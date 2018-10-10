#include<algorithm>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
long long ji = 0, ans[10005] = { 0,19 };
void dfs(long long x, int y, int ind, int now) {
	if (now == ind - 1) {
		ans[++ji] = x * 10 + y;
		return;
	}
	if (!y) {
		for(int a=0;a<ind-now;a++)
			x *= 10;
		ans[++ji] = x;
		return;
	}
	for (int a = 0; a <= y&&a<10; a++) {
		if (now == 0 && !a)
			continue;
		if (ji > 10000)
			break;
		dfs(x * 10 + a, y - a, ind, now + 1);
	}
}
int main() {
	for (int a = 2; ji <= 10000; a++)
		dfs(0, 10, a, 0);
    int x;
    cin >> x;
    cout << ans[x] << endl;
	return 0;
}