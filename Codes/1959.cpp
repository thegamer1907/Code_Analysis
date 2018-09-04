#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
map<int,int> m,v;
main()
{
	cin >> n >> k;
	int ans = 0;
	if(k == 1)
	{
		for(int i = 0; i < n; i++)
		{
			int b = 0;
			cin >> b;
			m[b]++;
			if(m[b] >= 3) ans += (m[b]-1)*(m[b]-2)/2;
		}
		cout << ans << endl;
		return 0;
	}
	for(int i = 0; i < n; i++)
	{
		int b = 0;
		cin >> b;
		if(b == 0)
		{
			m[b]++;
			if(m[b] >= 3) ans += (m[b]-1)*(m[b]-2)/2;
			continue;
		}
		m[b]++;
		if(b%k != 0) continue;
		if((b/k)%k != 0)
		{
			v[b] += m[b/k];
			continue;
		}
		ans += v[b/k];
 		v[b] += m[b/k];
	}
	cout << ans << endl;
}