#include <iostream>
#include <cstring>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

string w[120];

int main()
{
	int n;
	string pw;
	cin >> pw >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> w[i];
		if (w[i] == pw)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			string tmp = w[i] + w[j];
			if (tmp.find(pw) != string::npos)
			{
				cout<<"YES"<<endl;
				return 0;				
			}
		}
	cout << "NO" <<endl;
	return 0;
}

