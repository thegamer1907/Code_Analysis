#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string s, h;
	while(cin>>s)
	{
		scanf("%d", &n);
		bool up=false, down=false;

		for(int i=1; i<=n; i++)
		{
			cin>>h;
			if(h[0]==s[1])	down=true;
			if(h[1]==s[0])	up=true;
			if(h==s)	up=down=true;
		}

		if(up && down)	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
