#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cur=0,a,b,ans=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cur+=b-a;
        ans=max(cur,ans);
    }
    cout<<ans;
    return 0;
}