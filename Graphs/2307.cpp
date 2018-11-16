#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int n;
const int maxn = 2010;
int cnt[maxn];
bool has_father[maxn];
vector<int> vs[maxn];
int ans = -1;
void deal(int x, int num) {
	cnt[x] = num;
	if(num > ans) {
		ans = num;
	}
	for(auto t : vs[x]) {
		deal(t, num + 1);
	}
}
int main() {
	scanf("%d", &n);
	int p;
	for(int i = 1; i <= n; i++) {
		scanf("%d", &p);
		if(p != -1) {
			vs[p].push_back(i);
			has_father[i] = true;
		}
	}
	for(int i = 1; i <= n; i++) {
		if(!has_father[i] && cnt[i] == 0) {
			deal(i, 1);
		}
	}
	printf("%d", ans);
}
