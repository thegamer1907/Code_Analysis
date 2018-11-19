#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>
#include<stack>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<set>
#include<map>
using namespace std;
const int maxn = 1e5 + 5;
int a[maxn], n, k;
bool vst[maxn];

int main() {
#ifndef ONLINE_JUDGE
//	freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++) {
		int t = 0;
		for(int j = 0; j < k; j++) {
			int tmp;
			scanf("%d", &tmp); 
			if (!tmp) {
				continue;
			}
            t |= (1 << j);
		}
		vst[t] = 1;
	}
	bool flag = 0;
	for(int i = 0; i < (1 << k); i++) {
		for(int j = i; j < (1 << k); j++) {
			if(!vst[i] || !vst[j])
				continue;
			if((i & j) == 0) {
				flag = 1;
			}
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
