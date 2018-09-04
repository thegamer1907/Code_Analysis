#include<cstdio>
#include<iostream>
using namespace std;
typedef long long LL;
LL n,m,k;
LL min(LL a,LL b)
{
    return a<b?a:b;
}

int main()
{

	cin>>n>>m>>k;
	LL left=1,right=n*m+1,mid,ans=0;
	while(left<=right)
	{
		mid=(left+right)>>1;
		LL num=0;
		for(int i=1;i<=n;i++)
		{
			num+=min(m,mid/i);
		}
		if(num>=k){ans=mid;right=mid-1;}
		else left=mid+1;
	}
	cout<<ans<<endl;
}
