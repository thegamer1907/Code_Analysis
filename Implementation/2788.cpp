#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define oo 2000000000
const int N = 200010;

int frq[6] , a , ans = 0 , n;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		frq[a]++;
	}
	ans += frq[4];
	ans += frq[3];
	frq[1] -= frq[3];
	if(frq[1] < 0) frq[1] = 0;
	ans += (frq[1] + frq[2] * 2 + 3) / 4;
	cout << ans << endl;
	return 0;
}
