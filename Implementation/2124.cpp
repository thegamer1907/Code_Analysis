#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#define ll long long int


using namespace std;

int main()
{
	int x = 0, y = 0, z = 0;
	int n;
	cin >> n;
	int*a = new int[n];
	int*b = new int[n];
	int*c = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
		x += a[i];
		y += b[i];
		z += c[i];
	}
	if (z == 0 && y == 0 && z == 0)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}