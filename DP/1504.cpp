#include<iostream>
using namespace std;
int a[100];
int main()
{
	//freopen("input.txt","r",stdin);
	int n,curX=-1,maxX=-1,maxY=-1,max=0;
	cin>>n;
	for(int i=0;i<n;++i)
	cin>>a[i];
	int count0 = 0, count1=0, i = 0;
	while(i<n && a[i]==1)
	++i;
	//cout<<"i= "<<i<<endl;
	if(i==n)
	{
		if(n==1)
		cout<<"0";
		else
		cout<<(n-1);
	} else {
		curX=maxX=maxY=i;
		while(i<n)
		{
			if(a[i]==0)
			++count0;
			else
			++count1;
			//cout<<"i = "<<i<<" "<<(count0-count1)<<endl;
			if(count0-count1>max)
			{
				//cout<<count<<endl;
				maxX=curX;
				maxY=i;
				max=count0-count1;
			}
			++i;
			if(count0-count1<=0)
			{
				curX=i;
				count0=count1=0;
			}
		}
		//cout<<maxX<<" "<<maxY<<endl;
		int ans = 0;
		for(int i=0;i<n;++i)
		{
			if(i>=maxX && i<=maxY)
			{
				if(a[i]==0)
				++ans;
			} else
			if(a[i]==1)
			++ans;
		}
		cout<<ans;
	}
	cout<<endl;
	return 0;
}