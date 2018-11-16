#include <cstdio>
#include <iostream>
using namespace std;
int k;

int sum(int x)
{
	int ret = 0;
	while(x)
	{
		ret += x % 10;
		x /= 10;
	}
	return ret;
}

int main()
{
//	freopen("1.in", "r", stdin);
//	freopen("1.out", "w", stdout);
	cin >> k;
	int t = 0;
	for(int i = 1; i <= 20000000; i ++)
		if (sum(i) == 10)
		{
			t ++;
			if (t == k) 
			{
				cout << i;
				break;
			}
		}
	return 0;
}