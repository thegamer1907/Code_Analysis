#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	sort(a, a+n);
	
	int pt1 = 0, pt2 = n/2;
	int ans = 0;
	
	while (pt1 < n/2 && pt2 < n) {
		
		if (a[pt1]*2 <= a[pt2]) {
			ans++; pt1++; pt2++;
		} else {
			ans++; pt2++;
		}
		
	}
	
	while (pt1++ < n/2) {
		ans++;
	}
	while (pt2++ < n) {
		ans++;
	}
	
	cout << ans;
}