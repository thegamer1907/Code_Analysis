#include <bits/stdc++.h>
#define ll long long
#define mb make_pair
using namespace std;


int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, t;
	cin >> n >> t;
	string a;
	cin >> a;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < a.length()-1; j++)
		{
			if (a[j] == 'B'&&a[j + 1] == 'G')
				swap(a[j], a[j + 1]), j++;
		}
	}
	cout << a;
	return 0;
}