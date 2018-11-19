#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[2];
	cin>>s;
	int n;
	cin>>n;
	bool f1=0,f2=0;
	while(n--)
	{
		char t[3];
		cin>>t;
		if(s[0]==t[0]&&s[1]==t[1])
			f1=1,f2=1;
		if(s[0]==t[1])
			f1=1;
		if(s[1]==t[0])
			f2=1;
	}
	if(f1&&f2)
		puts("YES");
	else
		puts("NO");
}