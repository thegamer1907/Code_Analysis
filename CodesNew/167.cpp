#include <bits/stdc++.h>
#define ll long long
#define mb make_pair
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	long double  index;
	cin >> n >> index;

	for (int i = 0; i <= n; i++)
	{
		
		ll s = 0, e =powl(2,n), m;
		int ans = 0;
		while (s <= e)
		{

			m = (s + e) / 2;
			long double num = powl(2, i) + (m*powl(2, i + 1));
			
			if (num ==  index)
			return cout << i + 1, 0;
				
			else if (num > index)
				e = m - 1;
			else if (num < index)
				s = m + 1;

		}

	}

	return 0;
}