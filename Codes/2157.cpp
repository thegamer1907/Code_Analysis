#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <bitset>
#include <stack>
#include <string>
#include <stack>
using namespace std;

int n;
vector<int> a;
long long sum = 0;
long long suml, sumr;
int main() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int l = -1;
	int r = n;
	suml = sumr = 0;
	while (l < r-1) {
		if (suml <= sumr) {
			l++;
			suml += a[l];
		} else {
			r--;
			sumr += a[r];
		}
		if (suml == sumr) {
			sum = suml;
		}
	}
	cout << sum << endl;
	return 0;
}

