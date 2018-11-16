#include<bits/stdc++.h>
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); }
using namespace std;
typedef long long ll;
typedef long double ld;
#define F first
#define S second
#define pb push_back

const int MAXN=100005;

vector<int > adj[MAXN];
int a[MAXN];
int visited[MAXN];
int n,m,cnt,ans;
int mx[MAXN];
int corr[MAXN];
void dfs(int v){
    visited[v]=1;
    for(int j=0;j<adj[v].size();j++){
       int u=adj[v][j];
        if(!visited[u]){
           if(a[v]) mx[u]=mx[v]+a[u];
            else mx[u]=a[u];
   //          cout<<"haha "<<mx[u]<<endl;
            
            if(mx[u]>m) continue;
            if(adj[u].size()==1){
                ans++;
            
            }
             else  dfs(u);
        
        }    
//            cout<<"lol "<<v;
            
            }
    



}



int main(){
	IOS;;
        int i,j,k,p,q,x,y;
        ans=0,cnt=0;
        cin>>n>>m;
        for(i=1;i<=n;i++) cin>>a[i];     
        for(i=0;i<n-1;i++){
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        
        }
 /*      for(i=1;i<=n;i++)
       {        cout<<i<<" :";
            for(j=0;j<adj[i].size();j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
            }
   */    
       
           
        
//        cnt=a[1];
        mx[1]=a[1];
        dfs(1);
  /*      for(i=1;i<=n;i++){
            cout<<mx[i]<<endl;
        
        }

*/

        cout<<ans;
            





}
