#include<iostream>
using namespace std;
bool a[105];
int n,t;
int ans=-1e9;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i],t+=a[i];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(i<=j)
	{
		int cnt=0;
		for(int k=i;k<=j;k++)if(!a[k])cnt++;else cnt--;
		if(cnt>ans)ans=cnt;
	}
	cout<<t+ans<<endl;
	return 0;
}