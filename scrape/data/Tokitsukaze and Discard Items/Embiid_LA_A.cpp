#include <cstdio>
using namespace std;

const int maxn = 1e5 + 11;

long long page[maxn],pos[maxn];

int main(){
	long long n;
	long long m,k;
	scanf("%lld %lld %lld",&n,&m,&k);
	for (int i = 1;  i <= m; i++) {
		scanf("%lld",&pos[i]);
		page[i] = pos[i] / k + (pos[i] % k != 0);
	}
	long long ans = 0;
	long long now = page[1];
	long long cut = 0;
	long long i = 1;
	while (cut < m){
		ans++;
		pos[i] -= cut;
		now = page[i] = pos[i] / k + (pos[i] % k != 0);
		int tmp = cut;
		i++; cut++;
		while (cut < m){
			pos[i] -= tmp;
			page[i] = pos[i] / k + (pos[i] % k != 0);
			if (page[i] == now) cut++;
			else {
				pos[i] += tmp;
				page[i] = pos[i] / k + (pos[i] % k != 0);
				break;
			}
			i++;
		}
	}
	printf("%lld\n",ans);
}