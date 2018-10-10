#include<bits/stdc++.h>
using namespace std;
long long n,k,c1,t,c2,l,r;
int main()
{
	cin>>n;
	r=0;
	l=n;
	while((!(n%2)&&!(c1>=n/2&&c2<n/2))||((n%2)&&!(c1>n/2&&c2<=n/2)))
	{
		c1=0;
		c2=0;
		k=(l+r)/2;
		if(k<2)
		{
			cout<<1;
			return 0;
		}
		t=n;
		while(t>0)
		{
			c1+=min(k,t);
			t-=k;
			t=t-(t/10);
		}
		t=n;
		while(t>0)
		{
			c2+=min(k-1,t);
			t-=k-1;
			t=t-(t/10);
		}
		//cerr<<r<<' '<<l<<endl;
		if((!(n%2)&&(c1<n/2))||((n%2)&&(c1<=n/2)))
			r=(r+l)/2;
		else
			l=(r+l)/2;
		//cout<<c1<<' '<<c2<<endl<<endl;
	}
	cout<<k;
	return 0;
}