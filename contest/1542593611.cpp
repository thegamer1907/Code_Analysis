#include <algorithm>
#include <iostream>
#include <set>
#include <cmath> 
#include <map>
#include <vector>
#include <cctype>
#include <queue>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	long n;
	string s;
	vector <string> v;

	cin >> s;
	cin >> n;
	v.resize(n);
	string t;
	bool ans = false;
	for (long i = 0; i < n; ++i)
	{
		cin >> v[i];
		for (long j = 0; j <= i; ++j)
		{
			t = v[i] + v[j] + v[i] + v[j];
			if (t.find(s) != string::npos)
				ans = true;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;
	//system("pause");
	return 0;
}
