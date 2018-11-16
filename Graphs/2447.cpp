#include<bits/stdc++.h>
using namespace std;

const int maxn=1e4+10;

int color[maxn],fa[maxn];

int main(){
    int n,x;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>fa[i];
    }
    for(int i=1;i<=n;i++){
        cin>>color[i];
    }
    int ans=1;
    for(int i=2;i<=n;i++){
        if(color[i]!=color[fa[i]]) ans++;//,cout<<i<<" "<<fa[i]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
