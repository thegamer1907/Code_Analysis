#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int a[101];
int f[101][101];

int main(){
	int n;
	cin >> n;
	int f0[102] = {0};
	int f1[102] = {0};
	for (int i = 1; i <= n; i++) {
		f1[i] = f1[i-1];
		f0[i] = f0[i-1];
		cin >> a[i];
		if (a[i]) f1[i] = f1[i-1] + 1;
		else f0[i] = f0[i-1] + 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			// chon doan i, j
			// f1<i + f1>j + i<=f0<=j
			ans = max(ans, (f1[i-1] + f1[n] - f1[j]) + (f0[j] - f0[i-1]));
		}
	}
	cout << ans;
	return 0;
}
