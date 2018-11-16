#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

const int N = 30500;
int a[N];

int main()
{
	int n, m, k = 0;
	cin >> n >> m;
	vector <int> v;
	for(int i = 0; i < n - 1; i++)
	{
		cin >> a[i];
	}
	a[n - 1] = 1;
	for(int i = 0; i <= n - 1; i += a[i])
	{
		if(i + 1 == m)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
