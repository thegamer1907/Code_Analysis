#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t, i, j;
	vector<int> v;
	cin >> n >> t;
	int* a = new int[n-1];
	for(i = 0; i < n-1; i++) cin >> a[i];
	j = 1;
	v.push_back(j);
	while(true) {
		j = j+a[j-1];
		v.push_back(j);
		if(j >= n) break;
	}
	int flag = 0;
	for(i = 0; i < v.size(); i++) {
		if(v[i] == t) {
			flag = 1;
		}
	}
	if(flag == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
