#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long n;
bool check(long long k)
{
	long long t=n;
	long long ans=0;
	while(t>0)
	{
		if(t>k)ans+=k,t-=k;
		else ans+=t,t=0;
		t=t-t/10;
	}
	if(ans*2>=n)return true;
	else return false;
}
int main()
{
	cin>>n;
	long long l=0,r=n;
	while(l+1<r)
	{
		long long mid=(l+r)/2;
		if(check(mid))r=mid;
		else l=mid;
	}
	cout<<r<<"\n";
	return 0;
}
