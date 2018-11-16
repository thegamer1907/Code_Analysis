#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

void read(int &x)
{
	x=0;char ch=getchar();bool f=0;
	while(ch>'9'||ch<'0'){if(ch=='-')f=1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	if(f)x=-x;
}

bool vis[20001]; 
int dis[20001];
queue <int> q;

int bfs(int start,int to)
{
	q.push(start);
	vis[start]=true;
	while(!q.empty())
	{
		int now=q.front();
		q.pop();
		if(now==to)return dis[to];
		if(now-1>=0&&!vis[now-1])
		{
			q.push(now-1);
			vis[now-1]=true;
			dis[now-1]=dis[now]+1;
		}
		if(now*2<=20000&&!vis[now*2])
		{
			q.push(now*2);
			vis[now*2]=true;
			dis[now*2]=dis[now]+1;
		}
	}
	return -1;
}

int main()
{
	int from,to;
	read(from);read(to);
	cout<<bfs(from,to);
	return 0;
}