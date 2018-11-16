#include<bits/stdc++.h>
using namespace std;
int sum(int s[],int n)
{
	int max=0;
	int final=0;
	for(int a=0;a<n;a++)
	{
		max+=s[a];
		if(max<0) max=0;
		else if(max>final) final=max;
	}
	return final;
}
int main()
{
	int n;
	cin>>n;
	int s[n];
	int x;
	int c=0;
	if(n==1)
	{
		cin>>x;
		int ans;
		if(x)
		{
			ans=0;
		}
		else
		{
			ans=1;
		}
		cout<<ans;
	}
	else
	{
		for(int a=0;a<n;a++)
		{
			cin>>x;
			if(x==1){
				s[a]=-1;
				c++;
			}
			else s[a]=1;
		}
		int ans=0;
		if(sum(s,n)==0) ans=c-1;
		else ans=c+sum(s,n);
		cout<<ans;
	}

	return 0;
}
