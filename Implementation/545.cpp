#include<iostream>
using namespace std;
int main()
{
	int n, k, a[55], count = 0, i = 0;
	cin >> n >> k;
	for (; i < n; i++)
		cin >> a[i];
	i = 0;
	while (i < n)
	{
		if(a[i] >= a[k - 1] && a[i] > 0)
			count++;
		i++;
	}
	cout << count << endl;
	return 0;
}