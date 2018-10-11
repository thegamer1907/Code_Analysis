#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t;
	cin>>n>>t;
	long long arr[n];
	for(long long i=0;i<n;i++)
		cin>>arr[i];
	long long sum[n];
	sum[0]=arr[0];
	for(long long i=1;i<n;i++)
	{
		sum[i]=sum[i-1]+arr[i];
	}
	long long cnt=0,max=cnt;
	long long index=0,k=sum[0],i=0;
	while(i<n)
	{
		//cout<<k<<"   hey   "<<cnt<<"   "<<max<<"\n";
		if(k<=t)
		{
			cnt++;
			i++;
			if(max<=cnt)
				max=cnt;
			k=sum[i];
			if(index>0)
				k=sum[i]-sum[index-1];
			
			
		}
		else
		{

			k=sum[i]-sum[index];
			cnt--;
			index++;
		}

	}
	cout<<max<<endl;
}