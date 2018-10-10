#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin >> k;
	int cnt = 0;
	for(int i = 1; i < 5e7; i++)
	{
		int x = 0;
		int num = i;
		while(num > 0)
		{
			x += num % 10;
			num /= 10;
		}
		if(x == 10)
			cnt += 1;
		if(cnt == k)
		{
			cout << i << endl;
			return 0;
		}
	}
}