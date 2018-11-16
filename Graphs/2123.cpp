#include<bits/stdc++.h>

using namespace std;

int n, m, k=1, c, t;

int main()
{
	cin >> n >> m;
	while( n < m )
	{
		n *= 2;
		k*=2;
		c++;
	}
	while(k>0)
	{
		while(n-k>=m)
		{
			n-=k;
			c++;
		}
		k/=2;
	}
	cout << c;
	return 0;
}