#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	string p;
	int x = 0,f = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>p;
		if (s == p)return cout << "YES",0;
		if (s[0] == p[1])x++;
		if (s[1] == p[0])f++;
	}
	if (x&&f)cout << "YES\n";
	else cout << "NO\n";
	return 0;
}