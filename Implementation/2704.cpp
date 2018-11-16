#include "bits/stdc++.h"
using namespace std;


const int N = 105;
int p[N];

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		p[x] = i;
	}

	for(int i = 1; i <= n; ++i) printf("%d%c", p[i], " \n"[i == n]);
}