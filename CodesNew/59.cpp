#include <cstdio>
#include <algorithm>
using namespace std;

#define ll long long

ll a[1001];

int main(){
	int n;
	ll l;
	scanf("%d%lld", &n, &l);
	
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	ll dis = max(a[0] - 0, l - a[n-1]);
	dis *= 2;
	for(int i = 1; i < n; i++){
		dis = max(dis, a[i] - a[i-1]);
	}
	printf("%0.10f", dis / 2.0);
	
	return 0;
}