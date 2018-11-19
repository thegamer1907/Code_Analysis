#include<bits/stdc++.h>

using namespace std;

string g[200];

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++ )
	{
		cin >> g[i];
		if(g[i] == s)
		{
			cout << "YES";
			exit(0);
		}
		for(int j = 0 ; j <= i; j++)
		{
			if(("" + string(1,g[j][1]) + string(1,g[i][0]) == s) || ("" + string(1,g[i][1]) + string(1,g[j][0]) == s) )
			{
				cout << "YES";
				exit(0);
			}
		}	
	}
	cout << "NO";
}