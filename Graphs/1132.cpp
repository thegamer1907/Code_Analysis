#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t; cin>>n>>t;
    vector<int> g(n+1);
    for(int i = 1;i<=n;++i) cin>>g[i];
    vector<bool> used(n+1);
    int v = 1 + g[1];
while(true){
    if(v > n) break;
    if(used[v]) break;
    if(v == t){
        cout<<"YES"<<endl;
        return 0;
    }
    used[v] = true;
    v = v + g[v];
    
    
}
cout<<"NO"<<endl;

    return 0;
}
