#include <bits/stdc++.h>


using namespace std;


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int k;
	cin >> k;
	vector<int> a(10, 0);
	for (int i = 19; i < 70000000; i++)
	{
		int x = i;
		int s = 0;
		while (x > 0)
		{
			s += x % 10;
			x /= 10;
		}
		if (s == 10)
			k--;
		if (k == 0)
		{
			cout << i;
			return 0;
		}
	}
    return 0;
}
