#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ara[n];
	for(int i=0;i<n;i++)
	{
		cin>>ara[i];
	}
	sort(ara,ara+n);
	/*for(int i=0;i<n;i++)
	{
		cout<<ara[i]<<endl;
	}*/
	int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+ara[n-1]-ara[i];
}
//printf("%d\n",sum);
float x=m-sum;
//printf("%lf\n",x);
int y=ara[n-1]+m;
if(x<=0)

{
	cout<<ara[n-1]<<" "<<y;
}
else if(x>0)
{
	float k=n;
	float z=ceil(x/k);
	cout<<ara[n-1]+z<<" "<<y;
}
return 0;
	
}