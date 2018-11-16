#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	while (cin >> a)
	{
		string ans = "NO";
		int n = a.length();
		int Z = 0, E = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '1') Z = 0, E++;
			if (a[i] == '0') E = 0, Z++;
			if (Z >= 7 || E >= 7) ans = "YES";
		}
		cout << ans << endl;
	}
	return 0;
}