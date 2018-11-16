#include <bits/stdc++.h>

using namespace std;

int main() {

			#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> d;

	for(int i = 0; i < n-1; i++) {
		int x;
		scanf("%d", &x);
		d.push_back(x);
	}

	int count = 1;
	int i = 0;

	while(count < m) {
		count += d[i];
		i +=d[i];
	}

	if(count == m) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}