#include<iostream>
#include<algorithm>
using namespace std;
int a[110];
int main()
{
	int n,m;
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>mx)mx=a[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=mx-a[i];
	int ans1=mx,ans2=mx+m;
	m-=sum;
	while(m>0)
	{
		ans1++;
		m-=n;
	}
	cout<<ans1<<" "<<ans2<<"\n";
	return 0;
}
