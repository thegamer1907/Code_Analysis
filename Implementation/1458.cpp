#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,t;
	cin >> n >> t;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		char k;
		cin >> k;
		if (k == 'B') a[i] = 0;
		else a[i] = 1;
	}
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n-1; j++)
			if (a[j] == 0 && a[j + 1] == 1)
			{
				swap(a[j], a[j + 1]);
				j++;
			}
	}
	for (int i = 0; i < n; i++)
		if (a[i] == 0) cout << 'B';
		else cout << 'G';
		//system("pause");
		return 0;
}