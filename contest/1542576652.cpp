#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	char s[10],tmp[10];
	bool a=false,b=false;
	scanf("%s",s+1);
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%s",tmp+1);
		if (tmp[1]==s[1] && tmp[2]==s[2])
		{
			cout<<"YES";
			return 0;
		}
		if (tmp[1]==s[2])
		{
			b=true;			
		}
		if (tmp[2]==s[1])
		{
			a=true;
		}
		if (a && b)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
    return 0;
}
