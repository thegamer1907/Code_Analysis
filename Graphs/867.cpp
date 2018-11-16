#include<bits/stdc++.h>
#define MX 30009
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;
int destinaton ;


void DFS(int s)
{

    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(!vis[u])DFS(u) ;
    }

}

int main()
{

    int node ;

    cin >> node >> destinaton ;

    int ar[30009] ;

    for(int i=1 ; i<=node-1 ; i++)
        cin >> ar[i] ;

    for(int i=1 ; i<=node-1 ; i++)
    {
        adj[i].pb(i+ar[i]) ;
    }

    DFS(1) ;

    if(vis[destinaton]==1)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;

    return 0 ;

}

