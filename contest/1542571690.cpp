#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> v;
	fori(i, 0, n) {
		int b = 0;
		fori(j, 0, k) {
			int cur;
			scanf("%d", &cur);
			if(cur) {
				b |= (1 << j);
			}
		}
		v.push_back(b);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	bool bateu = false;
	int len = v.size();
	fori(i, 1, 1 << len) {
		int b = __builtin_popcount(i);
		int sum[4] = {0};
		fori(j, 0, len) {
			if(i & (1 << j)) {
				fori(f, 0, k) {
					if(v[j] & (1 << f)) {
						sum[f]++;
					}
				}
			}
		}
		bool beto_carero = true;
		fori(f, 0, k) {
			if(sum[f] > b / 2) {
				beto_carero = false;
			}
		}
		if(beto_carero) {
			bateu = true;
		}
	}
	
	puts(bateu ? "YES" : "NO");


	return 0;
}

