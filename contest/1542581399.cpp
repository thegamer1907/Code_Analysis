#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool vis[1<<5],ok=false;
int n,x,k; 
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int now=0;
		for(int j=0;j<=k-1;j++)scanf("%d",&x),now|=(1<<j)*x;
		vis[now]=true; 
	}
	for(int i=0;i<=(1<<k)-1;i++)
	if(vis[i])
	for(int j=0;j<=(1<<k)-1;j++)
	if(vis[j])
	if(!(i&j))
	ok=true;
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
} 
