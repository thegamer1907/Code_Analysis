#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;scanf("%d", &n);
	int x=0, y=0, z=0;
	for(int i=0;i<n;i++)
	{
		int a, b, c;scanf("%d%d%d", &a, &b, &c);
		x+=a;y+=b;z+=c;
	}
	if(!x and !y and !z)puts("YES");
	else puts("NO");
}