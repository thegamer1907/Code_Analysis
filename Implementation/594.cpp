#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, x=0;
	cin >> a >> b;
	for(int i = 0; i < b; i++)
	{
		cin >> c;
		if(c==0)
		{
			cout << x;
			return 0;
		}
		x++;
	}
	for(int i = b; i < a; i++)
	{
		cin >> d;
		if(d==0)
		{
			cout << x;
			return 0;
		}
		if(d==c)
		{
			x++;
		}
		else
		{
			cout << x;
			return 0;
		}
	}
	cout << x;
	return 0;
}