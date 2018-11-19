#include <bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long int
#define pb push_back
#define ins insert
#define pb push_back
#define fi first
#define se second

using namespace std;

int main()
{
	string pass;
	cin >> pass;
	int n;	cin >> n;
	vector <string> inp;
	vector <string> border[2];
	int flag = 0;

	for(int i = 0; i < n; i++)
	{
		string tmp;	cin >> tmp;
		for(int j = 0; j < tmp.size()-1; j++)
		{
			string tx = tmp.substr(j, 2);
			if(tx == pass)
				flag = 1;
		}
		if(tmp[0] == pass[1])
			border[1].pb(tmp);
		if(tmp[1] == pass[0])
			border[0].pb(tmp);
		inp.pb(tmp);
	}
	if(border[0].size() > 0 && border[1].size() > 0)
		flag = 1;
	if(flag == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}