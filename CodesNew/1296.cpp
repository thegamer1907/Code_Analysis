#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;
typedef long double ld;

using namespace std;


int main(){
	
	int n; 
	scanf("%d", &n);
	vector<int> a(n);
	for(int &x : a) scanf("%d", &x);
	ll mint = 1e18, ans = -1;
	for(int i = 0; i < n; i++){
		ll t = i + max(a[i] + n - 1 - i, 0) / n * 1ll * n;
		if(t < mint){
			mint = t;
			ans = i + 1;
		}
	}	
	printf("%lld\n", ans);

	return 0;
}