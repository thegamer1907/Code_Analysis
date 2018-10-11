#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define ll long long
#define MAX (int)1e7 + 16
#define pii pair<int,int>
using namespace std;
const int MX = 1e6 + 20;


int n, q, x, y;
int f[MAX];
int minPrime[MAX];
int limit = 1e7;
map<int, int> m;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	for (int i = 2; i * i <= limit; ++i) {
		if (minPrime[i] == 0) { //if i is prime
			for (int j = i * i; j <= limit; j += i) {
				if (minPrime[j] == 0) {
					minPrime[j] = i;
				}
			}
		}
	}

	for (int i = 2; i <= limit; ++i) {
		if (minPrime[i] == 0) {
			minPrime[i] = i;
		}
	}

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		m[x]++;		
	}

	for (auto cur : m)
	{
		x = cur.first;
		int idx = -1;
		while (x != 1) {						
			if (idx != minPrime[x]) f[minPrime[x]] += cur.second, idx = minPrime[x];
			x /= minPrime[x];
		}

		
		
	}

	

	for (int i = 1; i <= limit; i++) f[i] += f[i - 1];

	cin >> q;
	for (int i = 1; i <= q; i++)
	{
		cin >> x >> y;
		x = min(x, (int)1e7);
		y = min(y, (int)1e7);
		cout << f[y] - f[x - 1] << "\n";

	}

	return 0;
}
