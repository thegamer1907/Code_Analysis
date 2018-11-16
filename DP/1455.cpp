#include<bits/stdc++.h>
using namespace std;

int ans=0;
int most=-11111;

int main()
{
	int n;
	int a[110];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i])	ans++;
	}
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			int now=ans;
			for(int x=i;x<=j;x++)
			{
				if(a[x])	now--;
				else now++;
			}
			if(now>most)	most=now;
		}
	cout<<most<<endl;
	return 0;
}