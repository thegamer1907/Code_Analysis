#include<iostream>
char mymap[505][505];
struct note{int x;int y;} que[250010];
using namespace std;
int n,m,k;
int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int vis[520][520];
 
void bfs(int x,int y,int num);
int main()
{
	int num = 0,flag=0,starx,stary;
	cin>>n>>m>>k;
	cin.get();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mymap[i][j];
			if(mymap[i][j]=='.')
			{
				mymap[i][j]='X';
				num++;
				if(!flag)
					starx=i,stary=j,flag=1;
			}
		}
		if(i!=n-2)
			cin.get(); 
	}
	
	bfs(starx,stary,num-k);
	for(int i=0;i<n;i++)
		cout<<mymap[i]<<endl;
	return 0;
}

void bfs(int x,int y,int num)
{
	int head=0,tail=0,sum=1,tx,ty;
	que[tail].x=x;
	que[tail++].y=y;
	mymap[x][y]='.';
	vis[x][y] = 1;
	while(head<=tail)
	{
		if(sum>=num)
			break;
		for(int i=0;i<4;i++)
		{
			tx=que[head].x+next[i][0];
			ty=que[head].y+next[i][1];
			if(tx<0||ty<0||tx>=n||ty>=m||vis[tx][ty])
				continue;
			if(mymap[tx][ty]=='X')
			{
				if(sum>= num)
					break;
				vis[tx][ty] = 1;
				mymap[tx][ty]='.';
				que[tail].x=tx;
				que[tail++].y=ty;
				sum++;
			}
		}
		head++;
	}
}