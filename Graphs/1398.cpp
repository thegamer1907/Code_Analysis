#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, t;
	cin >> n;
	cin >> t;
	int shag;
	int place = 1;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> shag;
		if (i == place) place += shag;
		if (t == place)
		{
			break;
		}
	}
	if (place != t) cout << "NO";
	else cout << "YES";
}