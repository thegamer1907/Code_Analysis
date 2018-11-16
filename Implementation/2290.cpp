#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string a;
	while (cin >> n >> a)
	{
		char temp = '+';
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == temp) ans++;
			else temp = a[i];
		}
		cout << ans << endl;
	}
	return 0;
}