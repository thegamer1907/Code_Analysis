#include <bits/stdc++.h>

using namespace std;

#define debug(args...) fprintf(stderr,args)
#define pb push_back

const int N = 1e5 + 5;
const int inf = 1791791791;

int main() {
	set<int> s;
	int n, k;
	scanf("%d %d", &n, &k);
	getchar();
	for (int i=0;i<n;i++) {
		int p = 0;
		for (int j=k-1;j>=0;j--) {
			char c = getchar();
			getchar();
			if (c == '1') {
				p += (1<<j);
			}
		}
		if (p == 0) {
			printf("YES\n");
			return 0;
		}
		for (auto a : s) {
			//printf("%d %d\n", a, p);
			if ((a & p) == 0) {
				printf("YES\n");
				return 0;
			}
		}
		s.insert(p);
	}
	printf("NO\n");
    return 0;
}

