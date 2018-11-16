#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int n, t, var = 0;
	cin >> n >> t;
	vector<int>a(n-1);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> a[i];
	}
	int i = 0;
	while (i + a[i] != t - 1 && i < n - 2)
	{
		i = i + a[i];
	}
	if (i + a[i] == t - 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}