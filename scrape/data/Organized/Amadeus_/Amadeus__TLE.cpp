#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL nums[100000 + 5];

int main(){
	LL n, k;
	int m;
	scanf("%lld%d%lld", &n, &m, &k);
	for(int i = 0; i < m; ++i){
		scanf("%lld", nums + i);
	}
	int down = 0;
	int ans = 0;
	int lev = 0;
	int nexdown = 0;
	while(down < m){
		bool ok = false;
		for(int i = down; i < m; ++i){
			if((nums[i] - down - 1) / k == lev){
				ok = true;
				nexdown++;
			}
			else{
				break;
			}
		}
		down = nexdown;
		ans++;
		if(!ok){
			lev++;
			ans--;
		}
	}
	cout << ans << endl;
    return 0;
}