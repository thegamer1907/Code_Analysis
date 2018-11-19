#include <cstdio>
using namespace std;

int n, k, a[100000][4], cnt[16], bin;
bool ok;

int main(int argc, char const *argv[]) {
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; ++i) {
		bin = 0;
		for(int j=0; j<k; ++j) {
			scanf("%d", &a[i][j]);
			if(a[i][j]) bin |= (1<<j);
		}
		cnt[bin]++;
		if(!bin) ok = true;
	}
	for(int i=0; i<(1<<k) && !ok; ++i) {
		for(int j=0; j<i && !ok; ++j) {
			if(!(i&j) && cnt[i] && cnt[j]) ok = true;
		}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}