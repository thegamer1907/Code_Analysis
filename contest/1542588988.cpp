#include<bits/stdc++.h>

using namespace std;

int ihb,ikhb;

int main()
{
	string s,p;
	int n,a;
	cin>>s>>n;
	
	for(a=0;a<n;a++)
	{
		cin>>p;
		if(p==s)
		{
			printf("YES\n");return 0;
		}
		if(p[1]==s[0])
		{
			ihb++;
		}
		if(p[0]==s[1])
		{
			ikhb++;
		}
		if(ihb && ikhb)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	
}