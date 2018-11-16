#include<iostream>
using namespace std;
int main()
{
	int n, a, b, k = 1;
	cin >> n >> a >> b;
	a--;
	b--;
	while (n != 2)
		if (a / 2 == b / 2)
		{
			cout << k;
			return 0;
		}
		else
		{
			k++;
			n /= 2;
			a /= 2;
			b /= 2;
		}
	cout << "Final!";
	return 0;
}