#include <iostream>
using namespace std;
int main()
{
	int n, k, a[100002], s = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] >= a[k] && a[i]!=0)
		{
			s++;
		}
	}
	cout << s;
	//system("pause");
	return 0;
}