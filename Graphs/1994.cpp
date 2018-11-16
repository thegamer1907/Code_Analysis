#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define pb push_back
vector<int> adj[MAX];

int *visited;
int *cat;
int m;
//int count;
int counter;
void addedge(int x,int y){
    adj[x].pb(y);
    adj[y].pb(x);
}

void dfs(int s,int count){
   visited[s]=1;
   if(cat[s]==1){
    count++;
    //if(s==1) return;   
    if(count>m){
    //    cout<<"\nat node = "<<s<<"\n";
        return;}
    if(adj[s].size()==1 && s!=1){
          if(count<=m)
           //  cout<<"\nat node = "<<s<<"\n",
              counter++;
        if(count)  
        count--;     
       }
    }
    //else if(!cat[s]){}
    else {
        if(adj[s].size()==1 && count<=m && s!=1) counter++;
        if(count)   count=0;
    }
   for(auto i:adj[s]){   
    if(visited[i]==0) dfs(i,count);
    }
}

int main(){
    counter=0;
    int n;
    cin>>n>>m;
   // int first;bool flag=true;
    visited=new int[n+1];
    for(int i=1;i<=n;i++) visited[i]=0;
    cat=new int[n+1];
    for(int i=1;i<=n;i++) cin>>cat[i];
    n--;
    while(n--){
        
        int x,y;
        cin>>x>>y;
       // if(flag) first=x,flag=false;
       addedge(x,y);
    }
    dfs(1,0);
    cout<<counter;
    return 0;    
}
