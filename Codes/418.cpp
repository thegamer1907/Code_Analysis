#include <bits/stdc++.h>
using namespace std;
int k;
bool check(int x)
{
	int sum=0;
	while(x>0)
	{
		sum+=x%10;
		x/=10;
	}
	return sum==10;
}
int main()
{
	cin>>k;
	for(int i=19;i<=0x3f3f3f3f;i++)
	{
		if(check(i))k--;
		if(k==0)
		{
			cout<<i;
			return 0;
		}
	}
}