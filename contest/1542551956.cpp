#include<bits/stdc++.h>
#define ll long long
#define pb push_back 
#define clear(x) memset(x,0,sizeof(x))
#define ff first
#define ss second
const int size=1e6;
int arr[size];
using namespace std;
int main()
{
	int a[16];
	int n,k,flag=0;
	cin>>n>>k;
	clear(a);
	for(int i=1;i<=n;i++)
	{
		int x=0,y=k-1;
		for(int j=1;j<=k;j++)
		{
			int z;cin>>z;
			x+=z*pow(2,y--);
		}
		a[x]=1;
	}
	if(a[0]){cout<<"YES";return 0;}
	int x=k-1;
	k=1<<k;
	while(x>=0)
	{
		int y=1<<x;
		if(a[y])
		{
			for(int i=0;i<k;i++)
			{
				if((i!=y)&&((i&y)==0)&&(a[i]==1))
					{cout<<"YES";return 0;}
			}
		}
		x--;	
	}
	if(k==16)
	{
		for(int i=1;i<k;i++)
		{
			if(a[i])
			{
				for(int j=1;j<k;j++)
				{
					if(a[j]&&((i^j)==k-1))
						{cout<<"YES";return 0;}
				}
			}
		}
	}
	cout<<"NO";
}