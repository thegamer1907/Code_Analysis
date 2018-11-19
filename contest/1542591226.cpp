#include<bits/stdc++.h>
using namespace std;
string a[105];
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	int flag=0;
	for(int i=1;i<=n;i++)
	if(a[i][0]==s[0]&&a[i][1]==s[1])
	flag=1;
	
	for(int i=1;i<=n;i++)
	if(a[i][0]==s[1])
	for(int j=1;j<=n;j++)
	{
		if(a[j][1]==s[0])
    	flag=1;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}