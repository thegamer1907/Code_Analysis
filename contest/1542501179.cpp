#include<bits/stdc++.h>
using namespace std;
bool A,B;
string s,x;
int n;
int main()
{
	cin>>s;
	cin>>n;
	for(register int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==s) A=B=1;
		if(x[0]==s[1]) A=1;
		if(x[1]==s[0]) B=1;
	}
	if(A&&B)
	{
		puts("YES");
	}
	else puts("NO");
	return 0;
}