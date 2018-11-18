#include <bits/stdc++.h>

using namespace std;
string s, s1[1000], x, y;
long long n;
int main()

{
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; i++)
		{
			cin >> s1[i];
			if (s1[i] == s)
				{
					cout << "YES";
					return 0;
				}
		}
	for (int i = 0; i < n; i++)
		{
			x = s1[i];
			if (x[0] == s[1])
				{
					for (int j = 0; j < n; j++)
						{	
							y = s1[j];
							if (y[1] == s[0])
								{
									cout << "YES";
									return 0;
								}
						}
				}
			if (x[1] == s[0])
				{
					for (int j = 0; j < n; j++)
						{	
							y = s1[j];
							if (y[0] == s[1])
								{
									cout << "YES";
									return 0;
								}
						}
				}
		}
	cout << "NO";
	return 0;
}
