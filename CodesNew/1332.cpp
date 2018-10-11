#include <cstdio>
#include <cstring> 
using namespace std;

typedef long long ll;
const ll maxn = 1000000000000+100;
char str[110];
int base[4],price[4],ned[4];
ll tot;

bool juge(ll x) {
	ll sum = 0;
	for (int i = 1; i <=3; i++) {
		if (base[i] < x*ned[i]) {
			sum += (price[i] * (x*ned[i] - base[i]));
		}
	}
	return tot>=sum;
}

ll binary_ans() {
	ll l = 0, r = maxn;
	while (l < r) {
		ll mid = (l + r)/2+1;
		if (juge(mid))l = mid;
		else r = mid - 1;
	}
	return l;
}

int main() {
		scanf("%s",str); 
		memset(ned, 0, sizeof(ned));
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == 'B')ned[1]++;
			if (str[i] == 'S')ned[2]++;
			if (str[i] == 'C')ned[3]++;
		}
		for (int i = 1; i <= 3; i++)
			scanf("%d", &base[i]);
		for (int i = 1; i <= 3; i++)
			scanf("%d", &price[i]);
		scanf("%lld", &tot);
		printf("%lld\n", binary_ans());
	return 0;
}
