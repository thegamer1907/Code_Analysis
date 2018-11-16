#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z,xo(0),yo(0),zo(0);
	cin >> n;
	for (int i(0); i < n; i++)
	{
		cin >> x >> y >> z;
		xo += x;
		yo += y;
		zo += z;
	}
	if (xo == 0 && yo == 0 && zo == 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	//system("pause");
		return 0;
}