#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5,OO=0x3f3f3f3f;
bool vis[N];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,t; cin>>n>>t;
    string s; cin>>s;
    while(t--){
        memset(vis,0,sizeof(vis));
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'&&!vis[i]&&!vis[i+1]) swap(s[i],s[i+1]),vis[i]=1,vis[i+1]=1;
        }
    }
    cout<<s;

    return 0;
}
