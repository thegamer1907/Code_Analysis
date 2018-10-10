#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 1e5 + 10;
typedef long long ll;
int n, m;
ll a[MAXN];
ll tmp[MAXN], S;
ll cost = 0;
bool ok(int mid)
{
	for (int i = 1; i <= n; i++){
		tmp[i] = a[i] + mid * (ll)i;
	}
	sort(tmp + 1, tmp + n + 1);
	ll cnt = 0;
	int ans = 0;
	for (int i = 1; i <= mid; i++){
		if (cnt + tmp[i] > S)break;
		cnt += tmp[i];
		ans++;
	}
	if (ans >= mid){
		cost = cnt;
		return true;
	}
	return false;	//
}
int main()
{
	scanf("%d%I64d", &n, &S);
	for (int i = 1; i <= n; i++){
		scanf("%I64d", &a[i]);
	}
	int l = 0, r = n, ret = -1;
	while (l <= r){
		int mid = (l + r) / 2;
		if (ok(mid)){
			l = mid + 1;
			ret = mid;
		}
		else{
			r = mid - 1;
		}
	}
	printf("%d %lld\n", ret, cost);
}