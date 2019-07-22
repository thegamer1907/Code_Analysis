#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL nums[100000 + 5];

int main(){
	LL n, m, k;
	scanf("%lld%lld%lld", &n, &m, &k);
	for(int i = 0; i < m; ++i){
		scanf("%lld", nums + i);
	}
	LL ans = 0, cnt = 0;
	for(int i = 0; i < m;){
		LL tt = cnt;
		LL now = (nums[i] - tt - 1) / k;
		while(i < m && (nums[i] - tt - 1) / k == now){
			i++;
			cnt++;
		}
		ans++;
	}
	cout << ans << endl;
    return 0;
}