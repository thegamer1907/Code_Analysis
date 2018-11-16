#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum1=0,sum2=0,sum3=0;
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		sum1 += x;
		sum2 += y;
		sum3 += z;
	}
	if (sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES";
	else cout << "NO";
	//system("pause");
	return 0;
}