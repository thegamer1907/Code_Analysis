#include <bits/stdc++.h>
using namespace std;
double dis(int x1, int y1, int x2, int y2)
{
	return sqrt(1.0*(x1-x2)*(x1-x2)+1.0*(y1-y2)*(y1-y2));
}
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for (int i=1; i<=12000000; i++)
	{
		int x=i;
		int y=0;
		while (x>0)
		{
			y=y+x%10;
			x=x/10;
		}
		if (y==10)
		{
			ans++;
		}
		if (ans==n)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}