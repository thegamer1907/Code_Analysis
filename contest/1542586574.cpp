#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
double h,m,s;
int t1,t2;
int v[13][13];
void bre(int x,int y)
{
	if(x<=0) x=12;
	if(y>12) y%=12;
	v[x][y]=v[y][x]=0;
}
bool flag=false;
bool vis[13];
void dfs(int pos)
{
	if(pos==t2) {
		flag=true;
		return;
	}
	for(int i=1;i<=12;i++)
	if(v[i][pos])
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(i);
		}
	}
}
int main()
{
	for(int i=1;i<=11;i++){
    	v[i][i+1]=v[i+1][i]=1;
    }
    v[12][1]=v[1][12]=1;
	cin>>h>>m>>s;
	h=h+m/60+s/3600;
	if(h==int(h))
	{
		bre(h-1,h);
		bre(h,h+1);
	}
	else
		bre(int(h),int(h+1));
	m=m/5+s/300;
	if(m==int(m))
	{
		bre(m-1,m);
		bre(m,m+1);
	}
	else
		bre(int(m),int(m+1));
	s=s*1.0/5;
	if(s==int(s))
	{
		bre(int(s)-1,int(s));
		bre(int(s),int(s)+1);
	}
	else
		bre(int(s),int(s+1));
	cin>>t1>>t2;
	dfs(t1);
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
