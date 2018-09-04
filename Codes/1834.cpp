#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

long long n,m;
long long k;

int main()
{
	cin>>n>>m>>k;
	long long l=0,r=m*n,mid,ans;
	long long sum;
	while(l+1 < r)
	{
		sum=0;
		mid=(l+r)/2;
		for(int i=1;i<=n;i++)
		{
			sum += min(m,(mid)/i);
		}
		if(sum<k){
			l=mid;
			ans=mid;
		}
		else r=mid;
	}
	cout<<r<<endl;
}
