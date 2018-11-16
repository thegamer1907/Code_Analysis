#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int arr[100];
int main() {
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int N, K; cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	int val = arr[K - 1];
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] <= 0) continue;
		if (arr[i] >= val) count++;
	}
	cout << count << endl;
}