#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	vector<int> v1, v2;
	for(int j = 0; j < t; j++)
	{
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'B' and s[i+1] == 'G')
			{
				v1.push_back(i);
				v2.push_back(i+1);
			}
		}
		for(int i = 0; i < v1.size(); i++)
			swap(s[v1[i]], s[v2[i]]);
		v1.clear();
		v2.clear();
	}

	cout << s;
	return 0;
}