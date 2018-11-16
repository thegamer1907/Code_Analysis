#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef long long ll;
typedef pair<int,int> P;
int n,cnt,x,vis[105];

int main()
{
	scanf("%d%d",&n,&cnt);
	for(int i=1;i<=cnt;i++)
		scanf("%d",&x),vis[x]=1;
	scanf("%d",&cnt);
	for(int i=1;i<=cnt;i++)
		scanf("%d",&x),vis[x]=1;
	for(int i=1;i<=n;i++)
		if(!vis[i]) return puts("Oh, my keyboard!"),0;
	puts("I become the guy.");
	return 0;
}