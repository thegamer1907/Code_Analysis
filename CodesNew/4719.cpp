#include <bits/stdc++.h>

using namespace std;

#define SuperSaiyan ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sz(c)		(int)((c).size())
#define all(c)		((c).begin()), ((c).end())		
#define fi			first
#define se			second

typedef long long		ll;
typedef vector<int>		vi;
typedef pair<int, int> pii;

const int oo = (int)1e9+7;

int main()
{

	int n;
	scanf("%d", &n);

	vi a(n);

	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);

	sort(all(a));
	
	int pos = 0;
	int cnt = 0;
	int st = n / 2;
	if (n & 1) ++st;

	for (int i = st; i < n; ++i) 
	{
		if (a[i] >= a[pos] * 2) 
			++cnt, ++pos;
	}

	printf("%d", n - cnt);

	return 0;
}