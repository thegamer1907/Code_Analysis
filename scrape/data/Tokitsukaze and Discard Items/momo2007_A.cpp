#include <bits/stdc++.h>
using namespace std;

long long a[100001], first, space, op = 1, last;

int main(){
	long long k, n, page;
	
	cin >> k >> n >> page;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	if (n == 0) {
		cout << 0;
		return 0;
	}
	first = (a[1] - space) / page;
	if ((a[1] - space) % page) first++;
	for (int i = 1; i <= n; i++){
		long long pg_now = (a[i] - space) / page;
		if ((a[i] - space) % page) pg_now++;
		if (pg_now == first) last++;
		else {
			space = last;
			first = (a[i] - space) / page;
			if ((a[i] - space) % page) first++;
			last++;
			op++;
		}
	}
	
	cout << op;
	
	return 0;
}