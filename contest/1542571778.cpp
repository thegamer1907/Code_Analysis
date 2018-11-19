#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<cstring>
#include<ctime>
#include<cmath>
#include<limits>
#include<iterator>
#include<functional>
#include<unordered_map>
#include<stack>
#include<bitset>

#define all(v) v.begin(), v.end()
#define setv(ar, val) memset(ar, val, sizeof(ar));
#define ll long long int
#define ull unsigned long long int
#define PI 3.1415926535897932384626433832795
#pragma comment(linker, "/STACK:1073741824")
#pragma warning(disable:4996)
using namespace std;

multiset<int> d;
set<int> st;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++) {
		int a = 0;
		for (int j = 0; j < k; j++) {
			int g;
			scanf("%d", &g);
			a |= g << j;
		}
		d.insert(a);
		if (a == 0) {
			printf("YES");
			return 0;
		}
		st.insert(a);
	}

	for (int t : st) {
		d.erase(d.lower_bound(t));
		for (int m = 0; m < (1 << k); m++) {
			bool ok = true;
			for (int i = 0; i < k; i++) {
				if ((t & (1 << i)) && (m & (1 << i)))
					ok = false;
			}
			if (ok && d.count(m)) {
				printf("YES");
				return 0;
			}
		}
		d.insert(t);
	}

	printf("NO");
	


	return 0;
}