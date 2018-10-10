#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <map>


using namespace std;
typedef long long LL;
const int maxn = 2e5 + 7;

int a[maxn];

void init(int n){
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
}

void solve(int n, int k){
	map <int, LL> mp[4];
	for(int i = 1; i <= n; ++i){
		if(a[i] % k == 0){
			mp[3][a[i]] += mp[2][a[i] / k];
			mp[2][a[i]] += mp[1][a[i] / k];
		}
		mp[1][a[i]] += 1; 
	}
	LL ans = 0;
	map<int, LL> :: iterator it = mp[3].begin();
	for(; it != mp[3].end(); ++it){
		ans += it->second;
	}
	printf("%I64d\n", ans);
}

int main(){
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF){
		init(n);
		solve(n, k);
	}
	
	
	return 0;
} 
