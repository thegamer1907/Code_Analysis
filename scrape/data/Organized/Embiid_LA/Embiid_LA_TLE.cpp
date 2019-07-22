#include <cstdio>
using namespace std;

const int maxn = 1e5 + 11;

long long page[maxn],pos[maxn];

int main(){
	long long n;
	int m,k;
	scanf("%lld %d %d",&n,&m,&k);
	for (int i = 1;  i <= m; i++) {
		scanf("%lld",&pos[i]);
		page[i] = pos[i] / k + (pos[i] % k != 0);
	}
	long long ans = 0;
	long long now = page[1];
	long long cut = 0;
	int i = 1;
	while (i <= m){
		ans++;
		long long cnt = 0;
		while (i <= m) {
			pos[i] -= cut;
			page[i] = pos[i] / k + (pos[i] % k != 0);
			if (page[i] == now) { i++; cnt++; }
			else  break;
		}
		cut += cnt;
		pos[i] -= cut;
		now = page[i] = pos[i] / k + (pos[i] % k != 0);

	}
	printf("%lld\n",ans);
}