#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;

int a[N];

void add() {
	int add = 0;
	for(int i=0; i<1e8; i++) {
		int n = i, sum = 0;
		while(n) sum+=(n%10), n/=10;
		if(sum == 10) {
			a[++ add] = i;
			if(add == 1e4) break;
		}
	}
}

int main() {
	add();
	int n;
	scanf("%d", &n);
	printf("%d\n", a[n]);
	return 0;
}