#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector <int> f;
	int m, l, r;
	
	string s;
	cin >> s;
	vector<int> a(s.length(), 0);
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == s[i + 1])
			a[i + 1] = a[i] + 1;
		else
			a[i + 1] = a[i];
	}
	cin >> m;
	for (int i = 0;i < m;i++)
	{
		cin >> l >> r;
		f.push_back(a[r-1] - a[l-1]);
	}
	for (int i = 0;i < f.size();i++)
		cout << f[i] << '\n';
}