
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector <int> v;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
			v.push_back(1);
		else
			v.push_back(0);
	}
	vector <int> sum;
	sum.push_back(v[0]);
	for (int i = 1; i < s.size(); i++)
	{
		sum.push_back(sum[i - 1] + v[i-1]);
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << sum[b-1] - sum[a-1] << endl;
	}
}

