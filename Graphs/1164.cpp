#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, x;
	cin >> n >> t;
	int a[n + 10] = {};
	for (int i = 1; i < n; i++){
		cin >> x;
		a[i] = i + x;
	}
	int i = 1;
	string s = "1";
	while (i != n){
		i = a[i];
		s += to_string(i);
	}
	if (s.find(to_string(t)) != -1)	puts("YES");
	else	puts("NO");
	return 0;
}
