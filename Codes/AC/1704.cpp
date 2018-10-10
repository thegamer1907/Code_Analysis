#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	 ll n,m,k;
	 cin>>n>>m>>k;
	 ll mid,l=1,r=n*m;
	 while(l<=r)
	 {
	 	mid=(l+r)/2;
	 	ll c=0,i,sum=0;
	 	for(i=1;i<=n;i++)
	 	{
	 		sum=sum+min((mid-1)/i,m);
	 		if(sum>k)
	 			break;
	 		if(mid%i==0 && (mid/i)<=m)
	 			c++;
	 	}
	    if(sum<k && sum+c>=k)
	 		break;
	 	else if(sum<k)
	 		l=mid+1;
	 	else 
	 		r=mid-1;
	 }
	 cout<<mid;
}