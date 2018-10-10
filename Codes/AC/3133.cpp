#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, a[100010];
int main() {
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	LL mi, k = 1LL<<60;
	for(int i=0; i<n;i++){
		LL x = a[i]-i;
		if((x+n-1)/n < k){
			k = (x+n-1)/n;
			mi = i;
		}
	}
	cout << mi+1 <<endl;
	return 0;
}