#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int map[100005][5],t[3][3][3][3],f[6],n,m;
bool flag;
void dfs(int x,int dep)
{
    if(dep==m+1)
    {
	if(t[f[1]][f[2]][f[3]][f[4]])flag=1;
	return;
    }
    if(flag)return;
    if(map[x][dep])f[dep]=false,dfs(x,dep+1);
    else
    {
	f[dep]=true;dfs(x,dep+1);
	f[dep]=false;dfs(x,dep+1);
    }
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=m;j++)
	    scanf("%d",&map[i][j]);
	t[map[i][1]][map[i][2]][map[i][3]][map[i][4]]++;
    }
    for(i=1;i<=n;i++)
    {
	dfs(i,1);
	if(flag)
	{
	    cout<<"YES"<<endl;
	    return 0;
	}
    }
    cout<<"NO"<<endl;
    return 0;
}
