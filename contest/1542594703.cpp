#include<bits/stdc++.h>
using namespace std;

#define DEBUG

#ifndef TZNLOCAL
#undef DEBUG
#endif

#ifdef DEBUG
#define debug(...) fprintf(stderr,__VA_ARGS__)
#else
#define debug(...) ;
#endif

string s;
string st[111];
bool a[26][2];

int main()
{
	int n;
	cin>>s>>n;
	bool f=0;
	for(int i=1;i<=n;i++)
	{
		cin>>st[i];
	}
	for(int i=1;i<=n;i++) if (st[i]==s) f=1;
	for(int i=1;i<=n;i++) if (st[i][0]==s[1] && st[i][1]==s[0]) f=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if (st[i][1]==s[0] && st[j][0]==s[1]) f=1;
		}
	}
	if (f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
