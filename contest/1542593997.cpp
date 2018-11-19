#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include <stack>
#include<queue>
#include <exception>
#include <functional>
#include <bitset>
#include <iomanip>

typedef long long ll;
using namespace std;

long long n, m, k;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	FILE *file;
	file = new FILE;
	freopen_s(&file, "in.txt", "r", stdin);
#endif // !ONLINE_JUDGE
	string s;
	cin >> s;
	cin >> n;
	vector<string>v(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] == s)
		{
			cout << "YES";
			return 0;
		}
	}
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)

		{
			if (v[i][1] == s[0] && v[j][0] == s[1])
			{

				cout << "YES";
				return 0;
			}

		}
	cout << "NO";
}