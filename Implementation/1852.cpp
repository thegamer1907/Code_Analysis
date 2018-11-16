#include <iostream>
using namespace std;

int main()
{
	int n, x, y, z, fx = 0, fy = 0, fz = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		fx += x;
		fy += y;
		fz += z;
	}
	
	if(fx == 0 && fy == 0 && fz == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}
