#include <bits/stdc++.h>
using namespace std;

int n, sum, j;
vector <int> P;

int main() {
	ios :: sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	for (int i = 0; i < 2e7; i++) {
		sum = 0;
		j = i;
		while (j) {
			sum += j % 10;
			if (sum > 10)
				j = 0;
			j /= 10;
		}
		if (sum == 10)
			P.push_back(i);
	}
	cin >> n;
	cout << P[n - 1];
}