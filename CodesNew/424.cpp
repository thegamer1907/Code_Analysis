#include <bits/stdc++.h>

using namespace std;

int n, t;

int arr[100009];

int main() {/*
	freopen("a.inp", "r", stdin);
	freopen("a.out", "w", stdout);*/
	cin >> n >> t;
	arr[0] = 0;
	for (int i = 1; i <= n; i++) {
		int k; cin >> k;
		arr[i] = arr[i - 1] + k;
	}
	int l = 0;
	int Max = 0;
	for (int i = 1; i <= n; i++) {
		while(arr[i] - arr[l] > t) {
			l++;
		}
		if (i - l > Max) Max = i - l;
	}
	cout << Max;
}