#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    int p,q;
    cin>>n;
    while(n--){
        cin>>p>>q;
        if(q-p>1)ans++;
    }
    cout<<ans;
    return 0;
}