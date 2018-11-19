#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string pass;
	int n;
	vector <string> x;
	cin>>pass>>n;
	bool f = 0, s = 0;
	while (n--)
	{
		string temp;
		cin>>temp;
		if (temp == pass)
		{
			cout<<"YES"<<endl;
			return 0;
		}

		f |= (temp[1] == pass[0]);
		s |= (temp[0] == pass[1]);
	}

	if (f && s)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}