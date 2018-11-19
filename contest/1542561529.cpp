#include <bits/stdc++.h>

using namespace std;

string s;
string arr[105];
int n;

int main()
{
	cin >> s;
	cin >> n;
	int i;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]==s)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][1]==s[0]&&s[1]==arr[j][0])
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}