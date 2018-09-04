/*

 */
#include <bits/stdc++.h>
using namespace std;

map<int,map<int,long long>> value;
long long ans = 0;
int k, n;
void getans(int v) {
	if(v%k==0){
		ans+=value[v/k][2];
		value[v][2]+=value[v/k][1];
	}
	value[v][1]++;
}

int main() {

	scanf("%d %d", &n, &k);
	int x;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		getans(x);
	}
	printf("%lld",ans);
	return 0;
}
