#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t;
	vector<char> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < t; i++)
	{
	int j = 0;
	while (j < n - 1)
	{
		if (a[j] == 'B' && a[j + 1] =='G') {swap(a[j], a[j+1]); j+=2;} else j++;
	}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}