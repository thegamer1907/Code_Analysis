//author: Nguyen Xuan Duy
//Problem: 104
//"A MAN'S DREAM WILL NEVER DIE" - Marshall D Teach
#include<bits/stdc++.h>
using namespace std;
const int N=30005;
int n,Finish,b[N];
bool Visited[N],OK=false;
void DFS(int u)
{
	Visited[u]=true;
	if (u==Finish)
	{
		OK=true;
		printf("YES");
		return;
	}
	if (Visited[u+b[u]]==false)
		DFS(u+b[u]);
}
int main() 
{
	scanf("%d%d",&n,&Finish);
	memset(Visited,false,sizeof(Visited));
	for (int i=1;i<n;i++)
		scanf("%d",&b[i]);
	DFS(1);
	if (OK==false)
		printf("NO");
	
}
//Yuuki Asuna "September 30, 2007".Love You!
//No one can help you, let do it by yourself