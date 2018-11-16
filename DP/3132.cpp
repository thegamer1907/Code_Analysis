#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int  main()
{

	int h,w;
	cin>>h>>w;
	char str[h+1][w+1];
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)
			cin>>str[i][j];

	int ct[h+1][w+1]={0};
	int count=0;
	for(int i=h;i>=1;i--)
	{
		
		for(int j=w;j>=1;j--)
		{
			if(i!=h&&str[i][j]=='.'&&str[i+1][j]=='.')
				count++;
			if(j!=w&&str[i][j]=='.'&&str[i][j+1]=='.')
				count++;
			ct[i][j]+=count;
			if(i!=h)
				ct[i][j]+=ct[i+1][j];
			if(j!=w)
				ct[i][j]+=ct[i][j+1];
			if(i!=h&&j!=w)
				ct[i][j]-=ct[i+1][j+1];
			count=0;
			
		}
	}

	int down[h+1][w+1]={0},up[h+1][w+1]={0};
	for(int i=1;i<=w;i++)
	{
		count=0;
		for(int j=h;j>=1;j--)
		{
			if(j==h)
				down[j][i]=0;
			else
			{
				if(str[j][i]=='.'&&str[j+1][i]=='.')
					count++;
				down[j][i]=count;
			}

		}
	}
	for(int i=1;i<=h;i++)
	{
		count=0;
		for(int j=w;j>=1;j--)
		{	if(j==w)
				up[i][j]=0;
			else
			{
				if(str[i][j]=='.'&&str[i][j+1]=='.')
					count++;
				
				up[i][j]=count;
			}
		}
	}
	/*cout<<"\n";
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
			cout<<ct[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n";*/
	int q;
	cin>>q;
	int res;
	while(q--)
	{
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		/*if(r2==h&&c2==w)
			res=ct[r1][c1];
		
		else if(r2==h)
			res=ct[r1][c1]-ct[r1][c2];
		
		else if(c2==w)
			res=ct[r1][c1]-ct[r2][c1];
		
		else*/
			res=ct[r1][c1]-ct[r1][c2]-ct[r2][c1]+ct[r2][c2];
		res=res+down[r1][c2]-down[r2][c2];
		res+=up[r2][c1]-up[r2][c2];

		cout<<res<<"\n";
	}

		return 0;
	}