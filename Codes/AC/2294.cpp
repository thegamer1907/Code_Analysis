#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define mod 1000000007
#define p push
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MAX 10000007

int a[MAX];
int ans[MAX];
bool prime[MAX];

void sieve()
{
	for(int i = 2; i <= MAX; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;

	int u = 1;

	for(int i = 2; i < MAX; i++)
		if(prime[i])
			{
				for(int j = i; j < MAX; j += i) {
					prime[j] = 0;
					ans[i] += a[j];
				}
			}
}

signed main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		int n, m, i, j, u, v, mx = 0;
		int x, y;

		cin >> n;

		for(i = 1; i <= n; i++) 
			cin >> u, a[u]++;

		sieve();

		for(i = 2; i < MAX; i++) 
			ans[i] = ans[i] + ans[i - 1];
		
		cin >> m;

		// for(i = 1; i <= 10; i++) cout << ans[i] << " ";
		// 	cout << endl;

		while(m--)
			{	
				cin >> x >> y;

				if(x > 10000000) x = 10000000;
				if(y > 10000000) y = 10000000;
				cout << ans[y] - ans[x - 1] << endl;	
			}
		return 0;
	}