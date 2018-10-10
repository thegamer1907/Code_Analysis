#include <iostream>

using namespace std;

int main() 
{
	long long l,c=19,ans,s;
	cin>>l;
	while(l>0)
	{
		s=0;
		int k=c;
		while(k>0)
		{
			s=s+k%10;
			k/=10;
		}
		if (s==10)
		{
			ans=c;
			l--;
		}
		c+=9;
	}
	cout<<ans;
	return 0;
}
