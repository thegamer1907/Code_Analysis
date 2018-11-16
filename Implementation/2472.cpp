#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,res=0;
    for (int i=1;i<=n;++i) {
        int x,y;
        cin>>x>>y;
        res+=(y-x);
        ans=max(ans,res);
    }
    cout<<ans;
}
