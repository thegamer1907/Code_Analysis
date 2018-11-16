#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c;
	cin >> t;
	int x=0,y=0,z=0;
	while(t--)
	{
		cin >> a >> b >> c;
		x+=a,y+=b,z+=c;
	}
	if(x==0 && y==0 && z==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}