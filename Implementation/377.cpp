#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

const int wiel = int(1e6) + 7;
int t[wiel];

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> t[i];
	int w = t[m];
	int l = 0;
	for(int i = 1; i <= n; i++)
		if(t[i] >0 && t[i] >= w)
			l++;
	cout << l;

}
