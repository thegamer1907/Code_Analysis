#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
typedef long long ll;
int const INF = numeric_limits<int>::max();
int const N = 105;
string a[N];
int main()
{
	ios::sync_with_stdio(false);
	string pass;
	cin >> pass;
	int n;
	cin >> n;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == pass)
			flag = true;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string temp;
			temp += a[i][1];
			temp += a[j][0];
			if (temp == pass)
				flag = true;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}