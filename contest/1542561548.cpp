#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	scanf("%d", &n);
	string s1[n];
	for(int i = 0; i < n; i++)
		cin >> s1[i];
	//cout << s1[1];
	if(n == 1)
	{
		if((s[0] == s1[0][1] && s[1] == s1[0][0]) || (s[1] == s1[0][1] && s[0] == s1[0][0]))
			cout << "YES";
		else
			cout << "NO";
	}
	else
	{
//		cout << s1[2];
		int flag1 = 0, flag2 = 0;
		for(int i = 0; i < n; i++)
		{
			if(s1[i][1] == s[0])
				flag1 = 1;
			if(s1[i][0] == s[1])
				flag2 = 1;
			if(s.compare(s1[i]) == 0)
			{
				cout << "YES";
				exit(0);
			}
		}
		if(flag1 == 1 && flag2 == 1)
			cout << "YES";
		else
			cout << "NO";
	}
}
