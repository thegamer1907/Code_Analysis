#include<iostream>
using namespace std;
int n,a[100005],m,q,start[100005],last[100005],count=0;
int two(int ok)
{
	int high=n,low=-1;
	while(high-1>low)
	{
		int mid=(high+low)/2;
		if(q-1<start[mid])
		    high=mid;
		else
	    if(q-1>last[mid])
	        low=mid;
	    else
	        return mid+1;
	}
	return high;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		start[i]=count;
		last[i]=a[i]+count-1;
		count+=a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>q;
		cout<<two(q);
		if(i!=m-1)
		    cout<<endl;
	}
	return 0;
}
