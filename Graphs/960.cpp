#include <iostream>

using namespace std;

int main()
{
	int n, t, i;
	cin >> n >> t;
	int *a = new int[n];

	for (i = 0; i < n - 1; i++)
		cin >> a[i];

	i = 0;

	while((i < n - 1) && (i + 1!= t))
		i += a[i];

	(i + 1 == t)? cout << "YES" : cout << "NO";

	return 0;
}