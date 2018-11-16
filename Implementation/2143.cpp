#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int a, b, c;
	int a1 = 0, b1 = 0, c1 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		a1 += a;
		b1 += b;
		c1 += c;
	}
	if (a1 == 0 && b1 == 0 && c1 == 0) cout << "YES"; else cout << "NO";
}