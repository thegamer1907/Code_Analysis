#include<bits/stdc++.h>
using namespace std;
int main()
{
	string que;
	while (cin >> que)
	{
		string temp[1024];
		int n, c1, c2;
		cin >> n;
		int k = 0;
		for (int i = 0; i < n; ++i)
		{
			
			cin >> temp[k]; k++;
			temp[k] = temp[k - 1];
		/*	temp[k][0] = temp[k - 1][1];
			temp[k][1] = temp[k - 1][0];*/
		}
		int flag = 0;
		for(int i = 0;i<k;++i)
			for (int j = 0; j < k; ++j)
			{
				string ans = temp[i] + temp[j];
				string ans2 = temp[j] + temp[i];
				if (ans.find(que) != string::npos)
				{
					flag = 1;
				}
				if (ans2.find(que) != string::npos) flag = 1;
			}
		if (flag)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}