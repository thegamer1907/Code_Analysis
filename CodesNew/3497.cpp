#include<bits/stdc++.h>
#define cheet ios_base::sync_with_stdio(false);cin.tie(false),cout.tie(false);
using namespace std;
int main()
{
	int n, m, c[111], e = 0, mx = 0;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> c[i];
		mx = max(c[i], mx);
	}
	for(int i = 1 ; i <= n ; i++)
	{
		e += mx - c[i];
	}
	e -= m;
	if(e >= 0)
	{
		cout << mx;
	}
	else
	{
		int l = 0;
		while(e < 0)
		{
			e += n;
			l++;
		}

		cout << l + mx;
	}
	cout << " " << mx + m;

}
