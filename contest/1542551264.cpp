#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[5];
	cin.tie(0);
	cin>>s;
	int n;
	char ss[5];
	int f0=0,f1=0;
	cin>>n;
	while(n--)
	{
		cin>>ss;
		if(ss[0]==s[0]&&ss[1]==s[1])
		f0=f1=1;
		if(s[0]==ss[1])
		f0=1;
		if(s[1]==ss[0])
		f1=1;
	}
	if(f1&&f0)
	printf("YES");
	else
	printf("NO");
}

