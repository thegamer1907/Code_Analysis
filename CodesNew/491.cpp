#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i, d;
	int n, t;
	int count = 0;
	int j = 0;
	int max = 0;
	vector<int> v;
	cin >> n;
	cin >> t;
	v.resize(n);
	for (i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (i = 0; i < n; i++)
	{
		while (t < v[i])
		{
			count--;
			t = t + v[j];
			j++;


		}
		t = t - v[i];
		count++;
		if (count > max)
			max = count;

	}
	cout << max;
	return 0;
}