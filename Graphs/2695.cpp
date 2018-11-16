#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
bool visit[502][502];
int flag[502][502];
int val=0;
int p,n,m,k;
char arr[502][502];
void dfs(int x,int y)
{
	if(x<0 || y<0 || x>=n || y>=m)
		return;
	visit[x][y]=1;
	flag[x][y]=1;
	val++;
	if(val==p)
		return;
	if(visit[x-1][y]==0 && arr[x-1][y]=='.')
		dfs(x-1,y);
	if(val==p)
		return;
	if(visit[x+1][y]==0 && arr[x+1][y]=='.')
		dfs(x+1,y);
	if(val==p)
		return;
	if(visit[x][y-1]==0 && arr[x][y-1]=='.')
		dfs(x,y-1);
	if(val==p)
		return;
	if(visit[x][y+1]==0 && arr[x][y+1]=='.')
		dfs(x,y+1);
}
int main()
{
	int i,j,x,y;
	cin>>n>>m>>k;
	int a=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]=='.')
			{
				a++;
				x=i;
				y=j;
			}
		}
	}
	p=a-k;
	//cout<<x<<" "<<y<<endl;
	dfs(x,y);
	//cout<<flag[x][y]<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(flag[i][j])
				cout<<".";
			else if(arr[i][j]=='.')
				cout<<"X";
			else
				cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}