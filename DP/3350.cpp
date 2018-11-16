#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define F first
#define S second
#define ld long double
int const M=1e6+10,M2=1e7+10,mod=1e9+7,mod2=1e9+9,inf=1e9+10;
int f[M];
bool mark[M];
int32_t main()
{
	string x;
	cin>>x;
	f[0]=-1;
	int ans=-1;
	for(int i=1;i<x.size();i++)
	{
		f[i]=-1;
		int tmp=f[i-1];
		while(true)
		{
			if(x[tmp+1]==x[i])
			{
				f[i]=tmp+1;
				break;
			}
			if(tmp==-1)break;
			tmp=f[tmp];
		}
		int now=f[i];
		//cout<<mark[0]<<" "<<f[1]<<endl;
		while(true)
		{
			if(mark[now] && i!=(int)x.size()-1)break;
			if(now==-1)break;
			//cout<<i<<" "<<now<<" "<<mark[now]<<endl;
			if(i==(int)x.size()-1 && mark[now])
			{
				ans=now;
				break;
			}
			mark[now]=1;
			now=f[now];
		}
	}
	if(ans==-1)return cout<<"Just a legend",0;
	for(int i=0;i<=ans;i++)cout<<x[i];
}	
