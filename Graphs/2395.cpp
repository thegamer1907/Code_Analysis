#include<bits/stdc++.h>
using namespace std;

const int N=100100;

vector<int>adj[N];
bool vis[N];
int cnt=0;

void DFS(int u){
    cnt++;
    for(auto v : adj[u])
        DFS(v);
}

int main()
{

    int n;
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        int p;
        cin>>p;
        if(p != -1)
            adj[i].push_back(p);
    }

    int ans=0;

    for(int i=1 ; i<=n ; i++){
        cnt=0;
        DFS(i);
        ans=max(ans,cnt);
    }

    cout<<ans<<endl;


    return 0;
}
