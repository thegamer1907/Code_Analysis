#include <bits/stdc++.h> 
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;
typedef pair<int, int> pi;
typedef long long ll;
typedef pair<ll, ll> pll;
const int maxn = 2e5+1;

ll a[maxn], k[maxn], b[maxn];

int main()
{
	int n, q;
	cin >> n >> q;
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		if(i == 0) b[i] = a[i];
		else b[i] = b[i-1] + a[i];				
	}
	for(int i = 0; i < q; i++) cin >> k[i];
	ll strela = 0;
	for(int i = 0; i < q; i++)
	{		
		strela += k[i];
		int ziv = upper_bound(b, b+n, strela) - b;
		if(ziv == n) cout << n << "\n", strela = 0;
		else cout << n - ziv << "\n";
	}
	return 0;
}

