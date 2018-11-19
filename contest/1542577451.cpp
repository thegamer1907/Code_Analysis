#include<bits/stdc++.h>
using namespace std;
int N,K,cnt,b[20];
bool vis[20];
int main()
{
	cin>>N>>K;
	for(int i=1;i<=N;i++){
		int x=0,a;
		for(int j=1;j<=K;j++){
			scanf("%d",&a);
			x=x*2+a;
		}
		if(!vis[x])b[++cnt]=x;
		vis[x]=1;
	}
	if(vis[0]){
		printf("YES");
		return 0;
	} 
	for(int i=1;i<=cnt;i++)
		for(int j=i+1;j<=cnt;j++)
		{
			if(b[i]&b[j])continue;
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}