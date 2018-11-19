
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	vector<string> v;
	cin >> s;
	int n;
	cin >> n;
	v.resize(n);
	for (auto &i : v)
		cin >> i;
	int flag1 = 0, flag2 = 0;
	int flag = 0;
	for (auto i : v)
		if (i == s)
		{
			flag = 1;
			goto label;
		}
	for(auto i:v)
		if(i[1]==s[0])
		{
			flag2 = 1;
			break;
		}
	for (auto i : v)
		if (i[0] == s[1])
		{
			flag1 = 1;
			break;
		}
	flag = flag1 && flag2;
label:cout <<( flag ? "YES" : "NO") << endl;
	return 0;
}