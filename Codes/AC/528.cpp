#include <bits/stdc++.h>
using namespace std;
int k;
int main () {
	scanf("%d", &k);
	for (int i=1; ;i++) {
		int x=i, sum=0;
		while (x) {
			sum+=x%10;
			x/=10;
		}
		if (sum==10) {
			k--;
			if (k==0) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
}