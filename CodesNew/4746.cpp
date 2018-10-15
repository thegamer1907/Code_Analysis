#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,i,x;
	cin>>n;
	int *arr=new int[n+1];
	for(i=1;i<=n;++i)cin>>arr[i];
	sort(arr+1,arr+1+n);
	int r=n,l=r/2;
	for(i=l;i>0;--i)
		if(arr[i]*2<=arr[r])--r;
	cout<<r;
}
