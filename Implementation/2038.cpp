#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x[n], y[n], z[n];
	int xsum = 0, ysum = 0, zsum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
		xsum += x[i];
		ysum += y[i];
		zsum += z[i];
	}
	if (xsum == 0 && ysum == 0 && zsum == 0)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
