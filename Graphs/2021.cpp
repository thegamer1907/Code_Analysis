#include <bits/stdc++.h>
using namespace std;
const int inf = (int)1e5 + 7;
vector <int> g[inf];
bool used[inf];
int cat[inf] , ans;
int n , m;

void dfs(int v, int t)
{
	used[v] = 1;
	if(cat[v])t++;else t=0;
	
	if(t>m)return ;
	
	if(g[v].size()==1 && v != 1){ans++;}
	
	for(auto c : g[v])
	{
	    if( !used[c] )
	    {
	        dfs( c , t );
	    }
	}
	
	
}




int main()
{
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)cin >> cat[i];
    
    for(int i = 1; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        
        g[a].push_back(b);
        g[b].push_back(a);
        
    }
    dfs( 1 , 0 );
    
    
    cout << ans;
    
    
    
    
    
}