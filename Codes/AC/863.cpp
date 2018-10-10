#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll pos;

int main() {
	scanf("%d %lld", &n, &pos);
	pos--;
	ll sz = (1ll << (ll)n) - 2;
	int num = n;
	while(1) {
		ll md = sz / 2;
		if(pos == md) {
			printf("%d\n", num);
			return 0;
		}	else if(pos > md) pos -= (md + 1);
		sz /= 2;
		num--;
	}
}