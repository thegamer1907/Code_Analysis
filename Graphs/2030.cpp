#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=200001;int m,ans=0;
int vis[N], hi[N],par[N];
vector<int> adj[N];
int ar[N],ma[N];
void dfs(int x){
    vis[x] = 1;
    int i, ch;
    if(adj[x].size()==1&&x!=1)ans++;
    for(i = 0; i < adj[x].size(); i++){
        ch = adj[x][i];
        if(vis[ch] == 0){
            if(ar[ch]==1){
                if(ma[x]+1<=m){
                    ma[ch]=ma[x]+1;
                    dfs(ch);
                }
            }
            else{
                ma[ch]=0;
                dfs(ch);
            }
            //dfs(ch);
        }
    }
    return ;
}
int main() {
	int n;
	cin>>n>>m;
	for(int i=1;i<n+1;i++)cin>>ar[i];
	for(int i=0;i<n-1;i++){
        int a1,b1;
	    cin>>a1>>b1;
	    adj[a1].push_back(b1);
        adj[b1].push_back(a1);
	}
	hi[1]=0;
	//dfs(1);
	if(ar[1]==0)ma[1]=0;
	else ma[1]=1;
	dfs(1);
	//int ans=0;
	/*for(int i=2;i<n+1;i++){
        if(adj[i].size()==1){
            //if(ma[i]<=m)ans++;
        }
        //cout<<ma[i]<<" ";
	}*/
	cout<<ans<<endl;
	return 0;
}