#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Diff {
	int diff;
	int u, v; // u > v
};

bool cmp(Diff a, Diff b) {
	return a.diff < b.diff;
}

int arr[100];
int pCntEven[100], pCntOdd[100];

vector<Diff> dVec;

int main() {
	int n, b;
	scanf("%d %d", &n, &b);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(i == 0) {
			if(arr[i] % 2) pCntOdd[i]++;
			else pCntEven[i]++;
			continue;
		}

		if(arr[i] % 2) {
			pCntOdd[i] = pCntOdd[i - 1] + 1;
			pCntEven[i] = pCntEven[i - 1];
		}
		else {
			pCntEven[i] = pCntEven[i - 1] + 1;
			pCntOdd[i] = pCntOdd[i - 1];
		}
	}

	for(int i = 2; i < n; i += 2) {
		Diff val;
		val.diff = arr[i] - arr[i - 1];
		if(val.diff < 0) val.diff = -val.diff;
		val.u = i;
		val.v = i - 1;
		dVec.push_back(val);
	}

	sort(dVec.begin(), dVec.end(), cmp);

	int cnt = 0;
	for(int i = 0; i < dVec.size(); i++) {
		int diff = dVec[i].diff;
		int u = dVec[i].u, v = dVec[i].v;

		if(pCntOdd[v] == pCntEven[v] && diff <= b) {
			b -= diff;
			cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
