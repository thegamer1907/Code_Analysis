#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int x=0,y=0;
	while (n--)
	{
		string p;
		cin>>p;
		if (p==s)
		{
			cout<<"YES";
			exit(0);
		}
		if (p[1]==s[0])
		x++;
		if (p[0]==s[1])
		y++;
	}
	if (x>0&&y>0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
