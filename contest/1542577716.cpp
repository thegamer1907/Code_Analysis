#include<bits/stdc++.h>
using namespace std;
struct p
{
	int two;
	int numx;
}xx[6000];
int ww[5];
int n,k;
int read()
{
	int x=0;
	char ch;ch=getchar();
	while(ch<'0'||ch>'9'){ch=getchar();}
	while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)-ch+'0';ch=getchar();}
	return x;
}
int main()
{		
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{	for(int w=1;w<=k;w++)
			cin>>ww[w];
		int v=ww[1]+ww[2]*2+ww[3]*4+ww[4]*8;
		xx[v].numx++;
	}
	if(xx[0].numx!=0){cout<<"YES"<<endl;return 0;}
	for(int i=0;i<=15;i++)
	{
		if(xx[i].numx==0)continue;
		for(int w=i+1;w<=15;w++)
		{
			if(xx[w].numx==0)continue;	
			if((i^w)==(i+w)){cout<<"YES"<<endl;return 0;}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
