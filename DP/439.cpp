#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,m;
	cin>>n;
	int arr[n+1];
	arr[0]=-1;
	for(int i=1;i<=n;i++)
     cin>>arr[i];
     cin>>m;
     int brr[m+1];
     brr[0]=-1;
     for(int i=1;i<=m;i++)
     cin>>brr[i];
     sort(arr,arr+n+1);
     sort(brr,brr+1+m);
     int in[n]={0},k=0;
     int s=0;
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=m;j++)
     	{
     	if(abs(brr[j]-arr[i])<=1&&find(in,in+k,j)==in+k)
		 	{
		 		in[k++]=j;
		 	s++;
		 	break;
			 }
		 }
	 }
	 cout<<s;
}