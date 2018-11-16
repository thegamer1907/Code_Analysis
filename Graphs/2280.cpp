#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> adj[2005],v;
int height(int x){
    int val = 1;
    for(int i=0;i<adj[x].size();i++){
        val = max(val,1 + height(adj[x][i]));
    }
    return val;
}
signed main(){
    int t,n,x;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x==-1)
            v.push_back(i);
        else{
            adj[x].push_back(i);
        }
    }
    int ans = 0;
    for(int i=0;i<v.size();i++){
        ans = max(ans,height(v[i]));
    }
    cout<<ans<<endl;
    return 0;
}
