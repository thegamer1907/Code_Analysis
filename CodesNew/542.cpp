#include <bits/stdc++.h>
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[20000001]={0};
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	a[x]++;
    }
    int p[20000002]={0};bool p1[20000001]={0};
    for(int i=2;i<=20000000;i+=2)
    {
    	p1[i]=1;
    	p[2]+=a[i];
    }
    for(int i=3;i<=20000000;i+=3)
    {
    	p1[i]=1;
    	p[3]+=a[i];
    }
    for(int i=5;i<=20000000;i+=6)
    {
    	if(p1[i]==0)
    	{
		    for(int j=i;j<=20000000;j+=i)
		    {
		    	p1[j]=1;
		    	p[i]+=a[j];
		    }
		}
		if(p1[i+2]==0)
		{
			for(int j=i+2;j<=20000000;j+=(i+2))
			{
				p1[j]=1;
				p[i+2]+=a[j];
			}
		}
	}
	for(int i=2;i<=20000001;i++)
	{
		p[i]+=p[i-1];
	}
	cin>>n;
	int y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x>20000001)
		x=20000001;
		if(y>20000001)
		y=20000001;
		cout<<(p[y]-p[x-1])<<endl;
	}
}