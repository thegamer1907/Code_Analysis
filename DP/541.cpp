#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector <int> f;
	int m, l, r;
	vector<int> a;
	string s;
	cin >> s;
	a.push_back(0);
	for (int i = 0;i < s.length() - 1;i++)
	{
		if (s[i] == s[i + 1])
			a.push_back(a[i] + 1);
		else
			a.push_back(a[i]);
	}
	cin >> m;
	for (int i = 0;i < m;i++)
	{
		cin >> l >> r;
		f.push_back(a[r-1] - a[l-1]);
	}
	for (int i = 0;i < f.size();i++)
		cout << f[i]<<endl;
}