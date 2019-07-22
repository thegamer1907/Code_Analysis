#include<bits/stdc++.h>
 
using namespace std;

 
int main()
{
	std::ios::sync_with_stdio(false);
	
	long long n,m,k;
	cin >> n >> m >> k;
	
	vector<long long> special(m);
	for (int i = 0; i < m; ++i)
		cin >> special[i];
		
	long long incBy = k;
	int i = 0;
	int cum = 0;
	
	int ops = 0;
	while (i < m)
	{
		if (special[i] <= k)
		{
			cum = 0;
			while (i < m && special[i] <= k)
			{
				cum++;
				i++;
			}
			k += cum;
			ops++;
		}
		
		if (i < m && special[i] > k)
		{
			int times = (special[i] - k) / incBy;
			if ((special[i] - k) % incBy != 0)
				times++;
				
			k += times * incBy;
		}
	}
	
	cout << ops << endl;
}