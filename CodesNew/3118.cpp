#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int i,n,a[300009],k,c[300009],prefix[300009],count=0;
cin>>n>>k;
int pos=1,ma=0;
	for(i=1;i<=n;i++)cin>>a[i];
c[n+1]=prefix[n+1]=0;
	for(i=n;i>=0;i--)
	{
	prefix[i]=prefix[i+1]+!a[i];
		if(!a[i])
		count=0;
		else
		count++;
//	c[i]=count;
		if(count>ma)
		{
		ma=count;
		pos=i;
		}
	}
	for(i=1;i<=n;i++)
	{
	int low=i,high=n+1,mid;
		while(low<=high)
		{
		mid=(high+low)/2;
		int x=prefix[i]-prefix[mid]-k;
			if(x<=0)
			{
				if(mid-i>ma)
                		{
                		ma=mid-i;
                		pos=i;
                		}
			low=mid+1;
			}
			else
			high=mid-1;
		}
	}
cout<<ma<<endl;
	for(i=pos;i<pos+ma;i++)
	a[i]=1;
	for(i=1;i<=n;i++)cout<<a[i]<<" ";
cout<<endl;
return 0;
}
