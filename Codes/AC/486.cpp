#include <bits/stdc++.h>
using namespace std;
int k, ans;
int main() {
	cin >> k;
	for(int i = 1; ; i ++) {
		int x = i;
		int tmp = 0;
		while(x > 0) {
			tmp += x%10;
			x /= 10;
		}
		if(tmp == 10) ans++;
		if(ans == k) return 0*printf("%d\n",i);
	}
	return 0;
}