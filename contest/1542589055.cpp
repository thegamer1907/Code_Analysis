#include<bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int>ii;
typedef pair<int,ii> iii;

int adj[20][20];
bool vis[20];

int main(){
	for(int i = 0;i<12;i++){
		int bef=(i+11)%12;
		int nx=(i+1)%12;
		adj[i][bef]=adj[i][nx]=true;
	}
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h%=12;
	int nx=(h+1)%12;
	int bef=(h+11)%12;
	
	if(m!=0||s!=0)adj[h][nx]=adj[nx][h]=false;
	else adj[h][nx]=adj[h][bef]=false;
	
	int now=m/5;
	nx=(now+1)%12;
	bef=(now+11)%12;
	if(s==0&&now%5==0)adj[now][nx]=adj[now][bef]=false;
	else adj[now][nx]=adj[nx][now]=false;
	
	now=s/5;
	nx=(now+1)%12;
	bef=(now+11)%12;
	if(s%5==0)adj[now][nx]=adj[now][bef]=false;
	else adj[now][nx]=adj[nx][now]=false;
	
	queue<int>q;
	q.push(t1%12);
	
//	for(int i = 0;i<12;i++){
//		for(int j = 0;j<12;j++){
//			cout<<adj[i][j]<<" ";
//		}cout<<endl;
//	}
	
	while(!q.empty()){
		now=q.front();q.pop();
		if (vis[now])continue;
		vis[now]=true;
		
//		cout<<now<<endl;
		
		nx=(now+1)%12;
		bef=(now+11)%12;
		
		if(adj[now][nx])q.push(nx);
		if(adj[now][bef])q.push(bef);
	}
	
	if(vis[t2%12])cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}