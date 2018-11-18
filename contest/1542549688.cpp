#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstdlib>
#define  ll long long
using namespace  std;
const    ll   len=10001;
int main()
{
	string a;
	while(cin>>a)
	{
		int n;
		cin>>n;
		string b;
		int c1=0,c2=0;
		for(int i=0;i<n;i++)
		{
			cin>>b;
			if(a==b)
			{
				c1=1;c2=1;
			}
			if(a[0]==b[1])
				c1=1;
			if(a[1]==b[0])
				c2=1;
		}
		if(c1==1&&c2==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

