#include <bits/stdc++.h>

using namespace std;

int s(int x)
{
	int r = 0;
	
	while (x)
	{
		r += x%10;
		x /= 10;
	}
	
	return r;
}

int main()
{
	int c = 0, k;
	cin >> k;
	
	for (int i = 1; i < 20000001; i++)
		if (s(i) == 10)
		{
			c++;
			
			if (c == k)
			{
				cout << i;
				return 0;
			}
		}	
}