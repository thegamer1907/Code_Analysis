#include <bits/stdc++.h>
using namespace std;

long long a[100001], first, space, op = 0, last;

int main(){
	long long k, n, page;
	
	cin >> k >> n >> page;
	
	long long spe = n; 
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	long long begin = 1;
	while (spe > 0){
		op++;
		first = (a[begin] - space) / page;
		if ((a[begin] - space) % page) first++;
		for (int i = begin; i <= n; i++){
			int pg_now = (a[i] - space) / page;
			if ((a[begin] - space) % page) pg_now++;
			if (pg_now == first) {spe--; last++; begin = i + 1;}
			else {
				space = last;
				break;
			}
		}
	}
	
	cout << op;
	
	return 0;
}