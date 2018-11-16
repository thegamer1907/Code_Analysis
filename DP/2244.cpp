#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <climits>
#include <tuple>
#include <cassert>

using namespace std;

#define ALL(a) a.begin(), a.end()
#define pii pair<int, int>
#define len(a) (int)a.size()

typedef  long long ll;

class DSU {
private:
	vector<int> ids;
	vector<int> h;
public:
	DSU(int n) {
		ids.resize(n);
		h.resize(n);
		for (int i = 0; i < n; i++) {
			ids[i] = i;
			h[i] = 1;
		}
	}
	int getRoot(int ind) {
		if (ids[ind] != ind)return getRoot(ids[ind]);
		return ind;
	}
	bool connected(int ind1, int ind2) {
		return getRoot(ind1) == getRoot(ind2);
	}
	void connect(int ind1, int ind2) {
		if (connected(ind1, ind2))return;
		int r1 = getRoot(ind1);
		int r2 = getRoot(ind2);
		if (h[r1] > h[r2]) {
			ids[r2] = r1;
			h[r1] += h[r2];
		}
		else {
			ids[r1] = r2;
			h[r2] += h[r1];
		}
	}
	void showId(int n) {
		for (int i = 0; i < n; i++) {
			printf("%d ", ids[i]);
		}
		printf("\n");
	}
};

int main() {

	int n, q;
	scanf("%d %d", &n, &q);

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	vector<int> res(n, 0);

	set<int> help;
	for (int i = n - 1; i >= 0; i--) {
		help.insert(arr[i]);
		res[i] = len(help);
	}

	for (int i = 0; i < q; i++) {
		int l;
		scanf("%d", &l);
		printf("%d\n", res[l - 1]);
	}




#ifdef _DEBUG
	printf("\nEND\n");
	while (1);
#endif
	return 0;
}