#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int tmp=0,j=0;
	int res=0;

	for(int i=0;i<n;i++)
	{
		while(tmp+a[i]>m) tmp-=a[j],j++;
		tmp+=a[i];
		res=max(res,i-j+1);
	
		
	}
	cout<<res;
	
}