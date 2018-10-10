#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int maxN = 1e5, OFFSET = 2;
int a[maxN + OFFSET];
long long b[maxN + OFFSET];
long long ans;
int n, s;

void input(){
	scanf("%d %d", &n, &s);
	for(int i = 0; i < n; ++i)
		scanf("%d", a+i);
}

bool p(int k, int s){

	for(int i = 0; i < n; ++i)
		b[i] = (i+1) * 1ll * k + a[i];
		
	sort(b, b+n);

	ans = 0;
	for(int i = 0; i < k; ++i)
		ans += b[i];

	return ans <= s;
}

void solve(){
	
	int lo = 0, hi = n;
	while(lo < hi){
		int mid = lo + (hi - lo + 1)/2;
		if(p(mid, s)) lo = mid;
		else hi = mid-1;
	}
	
	printf("%d %d\n", lo, (p(lo, s), ans));
}


int main() {

	input();
	solve();
	
	return 0;
}