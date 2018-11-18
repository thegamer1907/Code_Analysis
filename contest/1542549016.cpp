#include <bits/stdc++.h>

using namespace std;

string a[200];

main ()
{
	string s, s1, s2;
	int n;
	
	cin >> s;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		{
			cin >> s1;
			
			if ((s[0] == s1[0] && s1[1] == s[1]) || (s[0] == s1[1] && s1[0] == s[1]))
				{
					cout << "YES";
					return 0;
				}
			
			a[i] = s1;	
		}
	
	for (int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				{
					s1 = a[i] + a[j];
					//cout << s1 << endl;
					if (s1[1] == s[0] && s1[2] == s[1])
						{
							//cout << s1 << endl;
							cout << "YES";
							return 0;
						}
				}
		}
	
	cout << "NO";
}
