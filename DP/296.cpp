#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 0;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(abs(a[i] - b[j]) <= 1)
			{
				k++;
				b[j] = INT_MAX;
				//cout << a[i] << " " << b[j] << endl;
				break;
			}
		}
	}
	cout << k;
	return 0;
}