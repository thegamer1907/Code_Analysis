#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
pair<ll, int> sortedArr[200001];
ll arr[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	ll curSum = 0;
	int ptr = 0;
	for (int i = n - 1; i >= 0; i--) {
		curSum += arr[i];
		sortedArr[ptr++] = { curSum, i };
	}
	
	ll curRes = 0;
	curSum = 0;
	for (int i = 0; i < n; i++) {
		curSum += arr[i];
		int idx = lower_bound(sortedArr, sortedArr + ptr, make_pair(curSum, 0)) - sortedArr;
		if (sortedArr[idx].first == curSum && sortedArr[idx].second > i) {
			curRes = curSum;
		}
	}

	cout << curRes;
}